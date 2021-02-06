#pragma once
/*main includes*/
#include <Windows.h>
#include <string>
#include <iostream>
/*=============*/

/*backend */
#include "backend/api/api.hpp" 
c_api* api = new c_api;
/*========*/

/*frontend*/
#include "frontend/pages/inject.hpp"
#include "frontend/pages/auth.hpp"
/*========*/
