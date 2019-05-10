#include <stdio.h>

int main()
{
	double roller_width = 0.3;
	double width = 7;
	double height = 2.3;
	double left_over;
	double amount_of_heights;
	while(roller_width < width){
		printf("Work done: %lf\n", roller_width);
		roller_width = roller_width + 0.3;
	}
	left_over = roller_width;
	if(left_over > width){
		left_over = left_over - width;
	}
	else{
		left_over = 0;
	}
	amount_of_heights = roller_width / height;
	printf("amount painted twice: %lf\n amount painted: %lf\n amount of heights: %lf\n", left_over, roller_width, amount_of_heights);
	return 0;
}

