#include <stdio.h>

int main()
{
	int num;
	printf("Please enter positive integers. Enter a negative integer to end the program\n\n\n");
	scanf("%d", &num);
	while(num >= 0){
		if(num % 7 ==0 || num % 11 == 0){
			printf("\n\n\n%d\n\n\n", num);
		}
		else{
			printf("\n\n\nNot a valid option\n\n\n");
		}
		printf("\n\n\nPlease enter positive integers. Enter a negative integer to end the program\n\n\n");
		scanf("%d", &num);
}
	return 0;
}

