#include "main.h"














int main()
{
	char str[] = "Hello wirld";

	char *token = _strtok(str, " ");

	printf("%s\n", token);
	return (0);
}
