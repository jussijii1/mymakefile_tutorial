// blah.c
#include <stdio.h>

int main()
{
	int returnVal = 0;
	returnVal = printf("Moikkuli\n");
	printf("\tNumber of characters transmitted to the output stream: %d\n", returnVal);
	if (returnVal < 0)
	{
		printf("Oh no!\n");
	}
	return 0;
}