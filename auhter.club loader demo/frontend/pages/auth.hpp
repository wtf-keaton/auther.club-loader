#pragma once
#include "../../include.hpp"

void authorization() {

	std::cout << "Enter key: ";
	std::cin >> key;

	if (api->auth(key)) {
		api->log(key, "user loggined at loader");
		inject();
	}
	else {
		std::cout << "Error" << std::endl;
	}
}