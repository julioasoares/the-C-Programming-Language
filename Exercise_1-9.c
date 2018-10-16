#include <stdio.h>
/* 
   replace each string of one or more blanks by a single blank 
   in this case assuming tabs are not spaces
*/

int main()
{
	long c;
	while ((c = getchar()) != EOF)
	{
		if (c == ' ')
		{
			while ((c = getchar()) == ' ')
				;
			putchar(' ');
		}
		putchar(c);
	}
	putchar('\n');
}