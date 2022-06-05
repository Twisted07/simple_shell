#include <stdlib.h>
#include <stdio.h>

/**
* main - process prints "Hello User"
*
*Return: 0 on success
*/

int main(void)
{
	char name;

	printf("What is your name? ");
	scanf("%c", &name);

	printf("Hello!\n");
	return (0);
}
