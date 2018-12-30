#include <stdio.h>
/* print Fahrenheit-Celsius table
for fahr = 300, 280, ..., 0 */
float convert(float fahr) {
	return 5.0/9.0 * (fahr - 32.0);
}
int main()
{
    float fahr;
	float lower, upper, step;
    lower = 0; /* lower limit of temperature scale */
	upper = 300; /* upper limit */
	step = 20; /* step size */
	fahr = upper;
	printf(" Fº         Cº\n---------------\n");
	while (fahr >= lower) {
		printf("%3.0f\t%6.1f\n", fahr, convert(fahr));
		fahr = fahr - step;
	}
	return 0;
}