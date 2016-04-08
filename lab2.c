#include <stdio.h>
#include <math.h>

double func(double x, double a, double b,double c, double d, double f, double g, double h);

int main()
{
	double x;
	double a, b, c, d, f, g, h;
	
	printf("\nVvedite X: ");
	scanf("%lf", &x);
	if(x < 1328) {
		a = 0;
		b = 1;
		c = 1;
		d = 3;
		f = -5;
		g = 0.005;
		h = 0;
	}
	else {
		a = 0;
		b = 7;
		c = 4;
		d = 1;
		f = -5;
		g = 0.004;
		h = 1100;
	}
	
	printf("\n\tY(x) = %lf", func(x, a, b, c, d, f, g, h));
	
}
double func(double x, double a, double b,double c, double d, double f, double g, double h)
{
	double vid;
	vid = a + (b / (c + d * exp(f + g * (x + h))));
	
	return vid;
}
