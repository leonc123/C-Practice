#include <stdio.h>

/*
Farenheit to celcius table in increments of 20
for fahr = 0, 20, ..., 300
This time, we format output to be right-justified and use floating point
values.
*/

int main()
{
	float fahr, celcius;
	int lower, upper, step;

	lower = 0;
	upper = 300;
	step = 20;

	fahr = lower;
	while(fahr <= upper)
	{
		celcius = 5.0/9.0 * (fahr-32.0);
		printf("%3.0f\t%6.1f\n", fahr, celcius);
		fahr = fahr + step; 
	}
}
