/*LABHW3_5(<���α׷��� ���� ����>�� �� 11: ���� ���� �Լ�ȭ)
�����ð��� ��� ���� ������ �̿��Ͽ� ������ ���� ���α׷��� �ۼ��϶�. 
0�̻� 100�̸��� ������ �߻����� �̸� �����Ͽ� �Ʒ��� ���� ����϶�. 
�䱸���� �迭�� �����ϴ� �Լ� selectionSort �� �̿��϶�. */
#include <stdio.h>
#include <stdlib.h>
#include <time.h>

void selectionSort(int list[], int size);

int main(void)
{
	int i;
	int randNums[10];

	srand(time(NULL));

	printf("�߻��� ���� : ");
	for (i = 0; i < 10; i++)
	{
		randNums[i] = rand() % 100;
		printf("%d ", randNums[i]);
	}
	printf("\n");

	printf("���� �� :     ");
	selectionSort(randNums, 10);

}
void selectionSort(int list[], int size)
{
	int i, k;
	int temp;

	for (i = 0; i < size; i++) 
	{
		for (k = 0; k < size-1; k++)
			if (list[k] > list[k+1])
			{
				temp = list[k];
				list[k] = list[k+1];
				list[k+1] = temp;
			}
	}

	for (i = 0; i < size; i++)
		printf("%d ", list[i]);
	printf("\n");
}