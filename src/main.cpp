#include <stdio.h>
#include "calc/calc_util.hpp"
#include "logger/logger.hpp"
#include "outside_lib/outside_lib.hpp"

int main(int agrc, char **argv) {
	printf("welcome to linux awesome project!\n");
	printf("calc_sum(1, 3):%d\n", calc_sum(1, 3));
	logger::get_instance()->log("logger working.\n");
	create();
}