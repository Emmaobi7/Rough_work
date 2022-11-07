#include <stddef.h>
#include <stdio.h>
#include <stdlib.h>
#include <errno.h>
#include <string.h>
#include <unistd.h>
#include <sys/wait.h>
char *_strtok(char *str, const char *delim);
size_t _getline(char **string, size_t *n, FILE *stream);





void command(char **parsed);
char *my_readline();
char **tokenize(char *buf);
