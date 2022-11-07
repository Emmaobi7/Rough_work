#include "main.h"

//strtok











int main(void)
{
	char str[] = "Hello world how are you";

	char *token = strtok(str, " ");

	while (token != NULL)
	{
	    printf("%s\n", token);
	    token = strtok(NULL, " ");
	}

	return (0);
}
