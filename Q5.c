#include <stdio.h>

int main()
{
	double num;
	double sum = 0;
	double average;
	int iterations = 0;
	printf("Enter a number and press -99 to quit\n");
	scanf("%lf", &num);
	while(num!=-99){
		if(num > 0){
			iterations++;
			sum = sum + num;
			average = sum / iterations;
			printf("Enter a number and press -99 to quit\n");
			scanf("%lf", &num);
		}
	else{
			printf("Enter a number and press -99 to quit\n");
			scanf("%lf", &num);
		}
	}
	printf("sum: %lf\n average: %lf\n iterations: %d\n", sum, average, iterations);
	return 0;
}

