#include <stdio.h>
#define IN 1 /* inside a word */
#define OUT 0 /* outside a word */
/* 
    count lines, words, and characters in input 
    the best way to test imo is using a text file as input
*/
int main()
{
	long c, nw, state;
	state = OUT;
	nw = 0;
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