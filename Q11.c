#include <stdio.h>

int main()
{
	double x = 1.0;
	double y;
	double sum;
	while(x <= 5.0){
		y = 4*x + 3*x + 2*x - x/2;
		sum = sum + y;
		printf(" x was: %lf\n y was: %lf\n sum is: %lf\n", x, y, sum);
		x = x + 0.1;
		
	}
	return 0;
}

