#include <stdio.h>

int main()
{
	FILE *in;
	in = fopen("numbers.txt", "r");
	float num;
	int number;
	float is_whole;
	float total = 0;
	while(!feof(in)){
		number = num;
		is_whole = num - number;
		if(is_whole == 0){
			total = total + num;
			printf("%f\n", num);
			printf("%f\n", total);
		}
		fscanf(in, "%f", &num);
	}
	fclose(in);
	printf("total sum is: %f\n", total);
	return 0;
}

