// lab2.2.cpp : Defines the entry point for the console application.
//

#include "stdafx.h"


#define PUT_DELIM(x, h, b) (x) + (h) >= (b) ? '\n' : ' '
#define COND1(x) (x) <= -M_PI/2
#define FUNC1(x) sin(2)*cos(x/2)
#define COND2(x) (x) < -M_PI/2 && (x) > M_PI/2
#define FUNC2(x) fabs ( (x)-(M_PI/2) )
#define FUNC3(x) ((x)-1)/(2-sqrt(x))
#define FUNC(x) COND1(x) ? FUNC1(x): (COND2(x) ? FUNC2(x) : FUNC3(x))

int main()
{
	double a = -M_PI, b = M_PI, x, h = 0.1;
	printf("x:\t");
	for (x = a; x <= b; x += h)
	{
		printf("%6.2f%c", x, PUT_DELIM(x, h, b));
	}
	printf("y:\t");
	for (x = a; x <= b; x += h)
	{
		printf("%6.3f%c", FUNC(x), PUT_DELIM(x, h, b));
	}
	getchar();

	return 0;
}
