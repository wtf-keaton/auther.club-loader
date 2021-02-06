#pragma once
#include "../../include.hpp"

void authorization() {
	std::string key;

	std::cout << "Enter key: ";
	std::cin >> key;

	api->auth(key);
}