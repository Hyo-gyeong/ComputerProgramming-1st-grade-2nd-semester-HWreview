//HW1_1(for ��, �迭, rand()�Լ�)
#include <stdio.h>
#include <stdlib.h>

int main(void)
{
	int i, k, input;
	int nums[100];
	int count[10] = {0};

	printf("Enter the number of random numbers:(<=100): ");
	scanf("%d", &input);

	for (i = 0; i < input; i++)
		nums[i] = rand() % 10;

	for (i = 0; i < input; i++)
		for (k = 0; k < 10; k++)
			if (nums[i] == k)
				count[k]++;

	for (i = 0; i < 10; i++)
		printf("%d�� ������ %d\n", i, count[i]);

	printf("\n---------------------------\n");
	printf("�߻��� ������\n");
	for (i = 0; i < input; i++)
	{
		printf("%5d", nums[i]);
		if ((i+1) % 5 == 0)
			printf("\n");
	}

	printf("\n");
}