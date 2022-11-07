#include <stdio.h>
#include <unistd.h>












int main()
{
	char *argv [] = {"/data/data/com.termux/files/usr/bin/ls", NULL};
	
	printf("Before execve\n");

	char *nul = NULL;
	char **nu = &nul;

	int check = execve(argv[0], argv, nu);

	if (check == -1)
	{
		perror("error");
	}
	printf("after execve\n");

	return (0);
}
