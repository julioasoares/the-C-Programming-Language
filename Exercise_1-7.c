#include <stdio.h>
/* copy input to output; 2nd version */
int main()
{
	int c;
	while ((c = getchar())!= EOF)
		;
	printf("The value of EOF in my OS is: %d\n", c);
}