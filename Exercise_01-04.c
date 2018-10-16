#include <stdio.h>
/* print Fahrenheit-Celsius table
for fahr = 0, 20, ..., 300 */
int main()
{
    float fahr, celsius;
	float lower, upper, step;
    lower = -20; /* lower limit of temperature scale */
	upper = 42; /* upper limit */
	step = 1; /* step size */
	fahr = lower;
	printf(" Cº         Fº\n---------------\n");
	while (celsius <= upper) {
		fahr = 1.8 * celsius + 32.0;
		printf("%3.0f\t%6.1f\n", celsius, fahr);
		celsius = celsius + step;
	}
}