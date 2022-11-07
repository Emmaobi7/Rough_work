#include <stdio.h>
#include <unistd.h>












int main(void)
{
	pid_t my_pid;
	pid_t pid;

	pid = fork();
	printf("Before fork\n");
	if (pid == -1)
	{
		perror("error");
		return (1);
	}
	printf("After fork\n");

	my_pid = getpid();

	printf("%d\n", my_pid);

	return (0);
}
