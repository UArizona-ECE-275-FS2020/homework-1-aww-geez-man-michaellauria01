#include <string> 
#include "Morty.hpp"
#include <iostream>
#include <stdio.h>
#include <stdlib.h>

using namespace std;
using namespace C137;
using namespace Z286;

// =========================================================================== // 
//          Define functions enclosed in Namespace C137 here 
// =========================================================================== //

namespace C137 {
	void Morty(int start, int stop, int step) {
		for (start; start <= stop; start = start + step) {
			printf("%d: ", start);

			if (start % 15 == 0) {
				printf("Aww Geez Man");
			}
			else if (start % 3 == 0) {
				printf("Aww");
			}
			else if (start % 5 == 0) {
				printf("Geez");
			}
			printf("\n");
		}

	}

	void Morty(int start, int stop) {
		for (start; start <= stop; start++) {
			printf("%d: ", start);

			if (start % 15 == 0) {
				printf("Aww Geez Man");
			}
			else if (start % 3 == 0) {
				printf("Aww");
			}
			else if (start % 5 == 0) {
				printf("Geez");
			}
			printf("\n");
		}
	}
}

// =========================================================================== // 
//          Define functions enclosed in Namespace Z286 here 
// =========================================================================== // 


namespace Z286 {
	void Morty(int start, int stop, int step) {
		for (start; start <= stop; start = start + step) {
			printf("%d: ", start);

			if (start % 15 == 0) {
				printf("naM zeeG wwA");
			}
			else if (start % 3 == 0) {
				printf("wwA");
			}
			else if (start % 5 == 0) {
				printf("zeeG");
			}
			printf("\n");
		}

	}

	void Morty(int start, int stop) {
		for (start; start <= stop; start++) {
			printf("%d: ", start);

			if (start % 15 == 0) {
				printf("naM zeeG wwA");
			}
			else if (start % 3 == 0) {
				printf("wwA");
			}
			else if (start % 5 == 0) {
				printf("zeeG");
			}
			printf("\n");
		}
	}
}
