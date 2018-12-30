#include <stdio.h>
#define IN 1        /* inside a word */
#define OUT 0       /* outside a word */
#define MAXLENGTH 20 /* maximum word size for effect of this program */

void histogram(int length)
{
	int i;
	for(i = 1; i <= length; ++i)
		putchar('=');
	putchar('\n');
}

int array_pos (int pos){
	if(pos <= MAXLENGTH )
		return pos;
	else
	    return MAXLENGTH;	
}

int main()
{
	long c, i, j, word_count, word_length, state ;
	int countlength[MAXLENGTH];
	
	
	state = OUT;
	word_length = word_count = 0;
	
	
	for(i = 0; i < MAXLENGTH; ++i)
		countlength[i]=0;
	
	
	while ((c = getchar()) != EOF) 
	{
		if ((c == ' ' || c == '\n' || c == '\t' || c == '\r'))
		{
			if(state == IN)
			{
				++countlength[array_pos(word_length)];
				++word_count;
			}
			word_length = 0;
			state = OUT;
		}
		else 
		{
			state = IN;
			++word_length;
		}
	}

	if (state == IN) // perhaps there was no line feed or blank, etc, after the last word
	{
		++countlength[array_pos(word_length - 1)];
		++word_count;
	}

	for(i = 0; i < MAXLENGTH; ++i)
	{
		printf("words with %3ld chars: ", i + 1);
		histogram(countlength[i]);
	}

    printf("words with +%2d chars: ", MAXLENGTH + 1); 
    histogram(countlength[MAXLENGTH]);
	printf("words: %3ld\n\n", word_count);

}
