#include<stdio.h>
/**
 * main - prints all possible different combinations of two digits
 * Return: Always 0 (success)
 */
int main(void)
{
	intn,m;
	for(n=48;n<=56;n++)
	{
		for(m=49;m<=57;m++)
		{
			if(m>n)
			{
				putchar(n);
				putchar(n);
				if(n!=56||m!=57)
				{
					putchar(',');
					putchar('');
				}
			}
		}
	}
	putchar("/n");
	return (0);
}

