#include "api.hpp"

bool c_api::auth(std::string key) {
	CURL* curl;
	CURLcode result;
	json all;
	curl = curl_easy_init();
	bool ret = false;

	std::string fields = "type=auth&public_token=" + this->public_token + "&license=" + key + "&hwid=" + get_hwid::hwid();
	
	if (curl) {
		std::string response;
		curl_easy_setopt(curl, CURLOPT_URL, this->auther.c_str());
		curl_easy_setopt(curl, CURLOPT_HEADER, 0);
		curl_easy_setopt(curl, CURLOPT_FOLLOWLOCATION, 1);
		curl_easy_setopt(curl, CURLOPT_MAXREDIRS, 10);
		curl_easy_setopt(curl, CURLOPT_POST, 1L);
		curl_easy_setopt(curl, CURLOPT_POSTFIELDS, fields.c_str());
		curl_easy_setopt(curl, CURLOPT_WRITEFUNCTION, writer);
		curl_easy_setopt(curl, CURLOPT_WRITEDATA, &response);

		result = curl_easy_perform(curl);

		if (result == CURLE_OK) {
			MessageBoxA(0, response.c_str(), "", MB_OK);
			// Парсим ответ сервера
			all = json::parse(response);
			// Парсим содержимое Status
			auto link = all["Status"].get<std::string>();
			MessageBoxA(0, link.c_str(), "", MB_OK);

			// Если в статусе Activated или Authorized возвращаем значение true. В ином случае оно остаётся false
			if (strstr(link.c_str(), "Activated") or 
				strstr(link.c_str(), "Authorized"))
				ret = true;
		}
		curl_easy_cleanup(curl);

	}
	return ret;
}

void c_api::log(std::string key, std::string message) {

}