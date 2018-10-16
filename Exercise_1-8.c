#include <stdio.h>
/* count blanks, tabs, and newlines */
int main()
{
	long c, nl, tb, sp;
	nl = tb = sp = 0;
	while ((c = getchar()) != EOF)
	{
		if (c == '\n')
			++nl;
		else if (c == '\t')
			++tb;
		else if (c == ' ')
			++sp;
	}
	// nl+1 Because empty files and files with a single line do have one line even if EOF is at the end of it.
	printf("Blanks = %ld\nTabs = %ld\nNew Lines = %ld\n", sp, tb, nl+1); 
}