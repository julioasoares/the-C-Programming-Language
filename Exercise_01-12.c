#include <stdio.h>
#define IN 1 /* inside a word */
#define OUT 0 /* outside a word */
/* 
    each word in a line 
    the best way to test imo is using a text file as input
*/
int main()
{
	long c, state;
	state = OUT;
	while ((c = getchar()) != EOF) 
	{
		if ((c == ' ' || c == '\n' || c == '\t'))
		{
			if(state==IN)
				putchar('\n');
			state = OUT;
		}
		else 
		{
			state = IN;
			putchar(c);
		}
	}
	putchar('\n');
}