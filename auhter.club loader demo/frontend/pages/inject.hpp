#pragma once
#include "../../include.hpp"

void inject() {
	system("cls");
	std::cout << "Welcome to demo loader!" << std::endl;

	std::cout << "Press any key to exit" << std::endl;
	_getch();
	api->log(key, "user exit from loader");
}