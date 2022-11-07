#include "main.h"

/*
 * getline implementation
 */









size_t _getline(char **string, size_t *n, FILE *stream)
{
	char *ptr;
	unsigned int len;
	char array[256];

	if (stream == NULL)
	{
		return (-1);
	}
	
	if (string == NULL || n == NULL)
	{
		return (-1);
	}

	if (ferror(stream))
	{
		return (-1);
	}
	
	if (feof(stream))
	{
		return (-1);
	}


	fgets(array,256,stream);

	ptr = strchr(array, '\n');
	if (ptr)
	{
		*ptr = '\0';
	}


	len = strlen(array);

	if ((len + 1) < 256)
	{
		ptr = realloc(*string, 256);
		if (ptr == NULL)
		{
			return (-1);
		}
		*string = ptr;
		*n = 256;
	}
	strcpy(*string, array);
	return (len);
}

	



