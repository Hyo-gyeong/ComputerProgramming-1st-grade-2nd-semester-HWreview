//LAB1_1(for 문, 배열) 배열의 내용 출력하기 
#include <stdio.h>
int main(void)
{
	int num[5];
	int i, input, sum = 0;

	for (i = 0; i < 5; i++)
	{
		printf("Eenter %dth number: ", i+1);
		scanf("%d", &input);
		num[i] = input;
		sum += input;
	}

	printf("--------------------------------------\n");
	printf("총합은 %d\n평균은 %d", sum, sum/5);
	printf("\n--------------------------------------\n");

	for (i = 0; i < 5; i++)
		printf("array[%d] : %d\n", i, num[i]); 

	return 0;
}