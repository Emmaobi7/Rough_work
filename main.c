#include "main.h"













int main()
{
	char *str;

	while (1)
	{
		printf("($) ");
		char *line = my_readline();
		char **token = tokenize(line);
		if (token != NULL)
		{
			command(token);
		}
	}
	
	return (0);
}
