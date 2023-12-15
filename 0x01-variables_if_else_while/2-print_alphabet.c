#include <stdio.h>

/**
 * main : any
 * return : (0) if sucess
 **/

int main (void)
{
	int currentChar ;

	for (currentChar = 'a' ; currentChar <= 'z' ; ++ currentChar)
	{
		putchar(currentChar);
	}
	putchar('\n');
	return 0;
}
