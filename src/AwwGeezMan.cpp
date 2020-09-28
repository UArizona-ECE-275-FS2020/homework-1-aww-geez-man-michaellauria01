#include "Morty.hpp"
#include <iostream>
#include <stdio.h>
#include <stdlib.h>
#include <string.h>

/*
Author: Michael Lauria
Date created : 09 / 13 / 20
*/

using namespace std;
using namespace C137;
using namespace Z286;

int main(int ac, char** av) {

	int id = 4, start, stop, step = 0;

	if (ac != 5 and ac != 4) {
		std::cout << "Error: Command line arguments are incorrect. Call program as (1) or (2)"
			<< std::endl;
		std::cout << "(1)\t./AwwGeezMan {start} {stop} {dimension}" << std::endl;
		std::cout << "(2)\t./AwwGeezMan {start} {stop} {step} {dimension}" << std::endl;

		return -1;
	}

	start = atoi(av[1]);
	stop = atoi(av[2]);
	if (ac == 5) {
		step = atoi(av[3]);
		id = 4;
	}
	char* dim = av[id];

	printf("Morty %s says:\n", dim);

	if (strcmp(dim, "C137") == 0) {
		if (step == 0)
			C137::Morty(start, stop);
		else
			C137::Morty(start, stop, step);
	}
	else if (strcmp(dim, "Z286") == 0) {
		if (step == 0)
			Z286::Morty(start, stop);
		else
			Z286::Morty(start, stop, step);
	}
	else {
		printf("ERROR: Unknown dimension!!\n");
	}

	return 0;
}
