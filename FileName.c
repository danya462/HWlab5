#include <locale.h>
#include <stdio.h>
#define _USE_MATH_DEFINES 
#include <math.h>

void main()
{
	setlocale(LC_CTYPE, "RUS");
	double F;
	double x = 2.3 * pow(10, 5);
	double y = 2.7;
	F = (sqrt(pow(2 + y, 2) + pow(sqrt(sin(y + 5)), 7))) / (log(x + 1) - pow(y, 3));
	printf("%.6lf", F);
}