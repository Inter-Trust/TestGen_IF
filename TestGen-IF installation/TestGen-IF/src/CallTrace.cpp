/*
 * CallTrace.cpp
 *
 *  Created on: 27 juin 2014
 *      Author: nhnghia
 */

#include "CallTrace.h"
#include <execinfo.h>
#include <stdio.h>
#include <stdlib.h>

namespace tsp {

void CallTrace::print() {
		int j, nptrs;
	#define SIZE 100
		void *buffer[100];
		char **strings;

		nptrs = backtrace(buffer, SIZE);
		printf("backtrace() returned %d addresses\n", nptrs);

		/* The call backtrace_symbols_fd(buffer, nptrs, STDOUT_FILENO)
		 would produce similar output to the following: */

		strings = backtrace_symbols(buffer, nptrs);
		if (strings == 0) {
			perror("backtrace_symbols");
			exit(EXIT_FAILURE);
		}

		for (j = 0; j < nptrs; j++)
			printf("%s\n", strings[j]);

		free(strings);
}

} /* namespace tsp */