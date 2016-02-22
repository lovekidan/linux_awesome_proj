#include "logger/logger.hpp"
#include <stdio.h>

static logger* g_instance = 0;

logger::logger() {

}

logger::~logger() {

}

logger* logger::get_instance() {
	if (0 == g_instance)
	{
		g_instance = new logger();
	}
	return g_instance;
}

void logger::log(char* message) {
	printf("message:%s\n", message);
}