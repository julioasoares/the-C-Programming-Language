#include <stdio.h>
/* print Fahrenheit-Celsius table
for fahr = 0, 20, ..., 300 */
int main()
{
    float fahr, celsius;
	float lower, upper, step;
    lower = 0; /* lower limit of temperature scale */
	upper = 300; /* upper limit */
	step = 20; /* step size */
	fahr = lower;
	printf(" C�         F�\n---------------\n");
	while (celsius <= upper) {
		fahr = 1.8 * celsius + 32.0;
		printf("%3.0f\t%6.1f\n", celsius, fahr);
		celsius = celsius + step;
	}
}