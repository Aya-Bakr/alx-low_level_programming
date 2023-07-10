#include <stdio.h>
#include <stdlib.h>
/**
 * main - print the result of the multiplication,
 *followed by a new line
 *@argc: int
 *@argv: list
* Return:0-will sucssess otherwise it will fail
*/

int main(int argc, char *argv[])
{

	int multi;

	if (argc == 3)
{
		multi = atoi(argv[1] * atoi(argv[2];
		printf("%d\n", multi);
	}
	else
	{
	printf("Error\n");
	return (1);
	}
	return (0);
}
