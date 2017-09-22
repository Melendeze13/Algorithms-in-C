#include <stdio.h>
#include <stdlib.h>

// Take an array of numbers and the size of the array
// Return the address of the array

void insertionSort(int * array, int size)
{
	// Check that size is bigger than 1 otherwise shortcircut to finish
	if (size < 2)
	{
		printf("The array is less than 2, nothing to sort\n");
		return;
	}

	// Check array is not null
	if (array == NULL)
	{
		printf("The array is empty\n");
		return;
	}

	int j   = 0;
	int i   = 0;
	int key = 0;

	// Start on the second element and interate through the array
	for (j = 1; j < size; j++)
	{
		// Set the key equal to element j
		key = array[j];

		// Set i equal to the value before j
		i = j - 1;

		// Keep switching elements back until we find where key is less
		// than array[i}
		while ((i >= 0) && (array[i] > key))
		{
			array[i + 1] = array[i];
			i = i - 1;
		}

		// Insert key in this value
		array[i + 1] = key;
	}
}


