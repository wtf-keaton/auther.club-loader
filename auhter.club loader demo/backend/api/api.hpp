#pragma once
// main includes
#include <Windows.h>
#include <string>

// project includes
#include "../curl/include/curl/curl.h"
#include "../json/json.hpp"
#include "../hwid/hwid.hpp"
#include "writers.hpp"

// json
using json = nlohmann::json;

class c_api
{
public:
	bool auth(std::string key);
	void log(std::string key, std::string message);

private:
	std::string public_token = "8tmr9uI603OLUwfKBjbxsAk1hzElqCdY"; // Ваш публичный токен, который вы можете в профиле (https://auther.club/profile/), нажав "Получить секретный токен"
	std::string private_token = "PxsU04Zo2e0zNquLhQkGQT74Fa6HMTIm"; // Ваш приватный токен, который вы можете в профиле (https://auther.club/profile/), нажав "Получить секретный токен"
	std::string auther = "https://auther.club/v1"; // Не менять
};

