#include <stdio.h>
int main(void)
{
	int input;

	printf("Enter the amount of change: ");
	scanf("%d", &input);

	printf("500 coin: %d\n", input / 500);
	input %= 500;
	printf("100 coin: %d\n", input / 100);
	input %= 100;
	printf("50 coin: %d\n", input / 50);
	input %= 50;
	printf("10 coin: %d\n", input / 10);

}