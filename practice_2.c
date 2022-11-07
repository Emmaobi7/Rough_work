#include <stdio.h>
#include <unistd.h>

int display(char c);
void print_alphabet(void);
int _islower(int c);
int _isalpha(int c);
int print_sign(int n);
int _abs(int n);
int print_last_digit(int n);
void jack_bauer(void);
void time_table(void);

int main(void)
{
	char *x = "_putchar";
	
	while (*x != '\0')
	{
		display(*x);
		x++;
	}
	display('\n');
	print_alphabet();
	display('\n');
	display('\n');

	int y = _islower('A');
	display(y + '0');
	display('\n');
	display('\n');

	int a = _isalpha('a');
	display(a + '0');
	display('\n');
	display('\n');

	int r = print_sign(-3);
	display(r + '0');
	display('\n');
	display('\n');

	int c = _abs(-4);
	display(c + '0');
	display('\n');
	display('\n');

	int g = print_last_digit(8);
	display(g + '0');
	display('\n');
	
	jack_bauer();

	return (0);
}

void jack_bauer(void)
{
	int i, j;
	
	for (i = 0; i <= 23; i++)
	{
		display('\n');
		for (j = 0; j <= 59; j++)
		{
			display((i/10) + '0');
			display((i%10) + '0');
			display(':');
			display((j/10) + '0');
			display((j%10) + '0');
			display('\n');
		}
	}
}
int print_last_digit(int n)
{
	int i;
	i = n % 10;
	
	return (i);
}
int _abs(int n)
{
	if (n > 0)
	{
		return (n);
	}
	else
	{
		return (-n);
	}
	display('\n');
}
int print_sign(int n)
{
	if (n > 0)
	{
		display('+');
		return (1);
	}
	else if (n == 0)
	{
		display('0');
		return (0);
	}
	else
	{
		display('-');
		return (1);
	}
}
int _isalpha(int c)
{
	if ((c >= 'a' && c <= 'z') || (c >= 'A' && c <= 'Z'))
	{
		return (1);
	}
	else
	{
		return (0);
	}
}
int _islower(int c)
{
	if (c >= 'a' && c <= 'z')
	{
		return (1);
	}
	else
	{
		return (0);
	}
}
void print_alphabet(void)
{
	int i, j;
	for (j = 1; j <= 10; j++)
	{
		display('\n');
	    for (i = 'a'; i <= 'z' ; i++)
	    {
		    display(i);
		    if (i != 'z')
		    {
			    display(' ');
			    display(',');
		    }
	    }
	}
}
int display(char c)
{
	return (write(1, &c, 1));
}	
