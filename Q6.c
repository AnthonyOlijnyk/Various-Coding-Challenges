#include <stdio.h>

int main()
{
	double width = 5;
	double roller_width = 0.2;
	double height = 2.5;
	double amount_left;
	double num_of_heights;
	double sub;
	do{
		printf("%lf\n", roller_width);
		roller_width = roller_width + 0.2;
		}while(roller_width < width);
	sub = roller_width;
	if(roller_width > 5.01){
		sub = roller_width - 0.2;
	}
	num_of_heights = roller_width / height;
	amount_left = sub - width;
	printf("amount unpainted: %lf\n number of heights: %lf\n", amount_left, num_of_heights);

		
	return 0;
}

