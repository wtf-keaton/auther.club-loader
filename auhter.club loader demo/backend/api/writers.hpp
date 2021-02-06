#pragma once
#include <string>
inline size_t writer(const void* indata, const size_t size, const size_t count, void* out) {
	(*(std::string*)out).append((const char*)indata, size * count);
	return size * count;
}