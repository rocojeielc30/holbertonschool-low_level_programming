#include <stdlib.h>
#include "main.h"

char *create_array(unsigned int size, char c) 
// size is how many characters to allocate 
// c is the character to fill the array with 
{
	char *array; 
	// pointer that points to the memory 
	// allocated by malloc
	unsigned int i;

	if (size == 0) // exercise is asking to return NULL if size = 0
	{
		return NULL;
	}

	// size multiplied by 1 byte (size of a char)
	array = malloc(size * sizeof(char)); 

	// prints if malloc has failed - ALWAYS CHECK THIS
	if (array == NULL)
	{
		return NULL;
	}

	// fills the array with the char chosen 
	for (i = 0; i < size; i++)
	{
		array[i] = c;
	}

	return array;
}
