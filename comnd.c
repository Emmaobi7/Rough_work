#include "main.h"














char **tokenize(char *line)
{
	int length = 0;
    int capacity = 16;
    char **tokens = malloc(capacity * sizeof(char*));

    char *delimiters = " \t\r\n";
    char *token = strtok(line, delimiters);

    while (token != NULL) {
        tokens[length] = token;
        length++;

        if (length >= capacity) {
            capacity = (int) (capacity * 1.5);
            tokens = realloc(tokens, capacity * sizeof(char*));
        }

        token = strtok(NULL, delimiters);
    }

    tokens[length] = NULL;
    return tokens;
}


char *my_readline()
{
	char *buf;
	size_t size = 1024;
	int val;

	val = getline(&buf, &size, stdin);
	if (val == -1)
	{
		printf("error");
		exit(1);
	}
	

	return (buf);
}


void command(char **parsed)
{


	pid_t pid = fork();

	if (pid == -1)
	{
		printf("failed forking");
		return;
	}

	else if (pid == 0)
	{
		if (execve(parsed[0], parsed, NULL) < 0)
		{
			printf("could not execute command");
			exit(1);
		}
	}
	else
	{
		wait(NULL);
	}
	execve(parsed[0], parsed, NULL);
	
	return;
}

