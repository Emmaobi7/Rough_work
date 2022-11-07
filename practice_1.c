#include <stdio.h>
#include <unistd.h>





int display(char c);

int main(void)
{
	int i;

	for (i = 'z'; i >= 'a'; i--)
	{
		display(i);
		if (i != 'a')
		{
			display(',');
			display(' ');
		}
	}
	display('\n');

	return (0);
}





int display(char c)
{
	return (write(1, &c, 1));
}
