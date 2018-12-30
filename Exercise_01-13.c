#include <stdio.h>
#define IN 1 /* inside a word */
#define OUT 0 /* outside a word */
#define MAXLENGTH 20 /* maximum word size for effect of this program */

void histogram(int length)
{
	int i;
	for(i = 1; i <= length; ++i)
		putchar(61);
	printf(" %2d \n", length);
}

int array_pos (int pos){
	if(pos <= MAXLENGTH)
		return pos;
	else
	    // adding words bigger than MAXLENGTH in countlength[0] as there are no words with 0 length;
	    return 0;	
}

int main()
{
	long c, i, j, wl, state ;
	int countlength[MAXLENGTH];
	state = OUT;
	wl = 0;
	for(i = 0; i <= MAXLENGTH; ++i)
		countlength[i]=0;
	
	while ((c = getchar()) != EOF) 
	{
		if ((c == ' ' || c == '\n' || c == '\t' || c == '\r'))
		{
			if(state == IN)
				++countlength[array_pos(wl)];
			wl = 0;
			state = OUT;
		}
		else 
		{
			state = IN;
			++wl;
		}
	}

	if (state == IN)	// perhaps there was no line feed or blank, etc, after the last word
		++countlength[array_pos(wl)];

	for(i = 1; i <= MAXLENGTH; ++i)
	{
		printf("words with %3ld chars: ", i);
		histogram(countlength[i]);
	}
	
	printf("words with +%2d chars: ", MAXLENGTH + 1); 
    histogram(countlength[0]);
}