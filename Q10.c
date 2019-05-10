#include <stdio.h>

int main()
{
	int num;
	printf("Enter a number divisible by 3\n");
	scanf("%d", &num);
	while(num % 3 != 0){
		printf("WRONG! Enter a number divisible by 3\n");
		scanf("%d", &num);
	}
	printf("Finally\n");
	return 0;
}

