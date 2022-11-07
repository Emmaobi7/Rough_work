#include "main.h"














char *_strtok(char *str, const char *delim)
{
	while (*str != '\0')
	{
		if (*str == *delim)
		{
			continue;
		}
		str++;
	}
	return (str);
}

