#include <stdlib.h>
#include <stdio.h>
#include "window.h"

int main (int argc, char *argv[])
{
	printf("Rally\n");

	window_init();

	window_destroy();

	return EXIT_SUCCESS;
}