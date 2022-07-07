#include <stdio.h>
/**
 * main - print single digit numbers
 * Description: prints all single digit numbers
 * return :Aways 0 (Success)
 */
int main(void)

{
	int i;

	i = 48;

	while (i < 58)
	{
		putchar (i);
		i++;
	}

	putchar (10);

	return (0);
}
