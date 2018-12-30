#include <stdio.h>
#define CHARSLIMIT 5000 /* maximum number of CHARs for effect of this program */
#define MAXCHARS 128    /* maximum char range */

void histogram(int length)
{
	int i;
	for(i = 1; i <= length; ++i)
		putchar('=');
	putchar('\n');
}

int main()
{
	long c, i, ccount, cinvalid;
	int charmap[MAXCHARS];
	
	ccount = cinvalid = 0;
	
	for(i = 0; i < MAXCHARS; ++i)    // Initializing array
		charmap[i]=0;
	
	while (((c = getchar()) != EOF) && (ccount<=CHARSLIMIT)) 
	{
		++ccount;
		if (c <= MAXCHARS)
		{
			++charmap[c];
		}
		else 
		{
			++cinvalid;
		}
	}

	for(i = 0; i < MAXCHARS; ++i)
	{
		printf("Char #%3ld: ", i);
		histogram(charmap[i]);
	}

	printf("\nTotal chars: %3ld\n", ccount);

	printf("Invalid chars: %3ld\n\n", cinvalid);

	return 0;
}
