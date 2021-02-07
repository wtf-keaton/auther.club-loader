#pragma once
/*main includes*/
#include <Windows.h>
#include <string>
#include <iostream>
#include <conio.h>
/*=============*/

/*backend */
#include "backend/api/api.hpp" 
c_api* api = new c_api;
/*========*/

/*key string*/
std::string key;


/*frontend*/
#include "frontend/pages/inject.hpp"
#include "frontend/pages/auth.hpp"
/*========*/
