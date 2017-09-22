#include <stdio.h>
#include <stdlib.h>
#include "my_algorithms.h"

int main(void)
{
	int arraySorted[] = {31, 7, 59, 26, 41, 58};
	int arraySortedSize = sizeof(arraySorted)/sizeof(arraySorted[0]);

	int i = 0;
	// printf("arraySortedSize: %d\n", arraySortedSize);
	for (i = 0; i < (arraySortedSize - 1); i++)
	{
		//printf("Array: %d\n", arraySorted[i]);
	}

	insertionSort(arraySorted, arraySortedSize);

	for (i = 0; i < arraySortedSize; i++)
	{
		printf("Array: %d\n", arraySorted[i]);
	}

	return 0;
}
