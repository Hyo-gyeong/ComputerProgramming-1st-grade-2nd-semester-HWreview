/*LABHW3_5(<프로그래밍 논리의 이해>의 논리 11: 선택 정렬 함수화)
수업시간에 배운 선택 정렬을 이용하여 다음과 같은 프로그램을 작성하라. 
0이상 100미만의 난수를 발생시켜 이를 정렬하여 아래와 같이 출력하라. 
요구사항 배열을 정렬하는 함수 selectionSort 를 이용하라. */
#include <stdio.h>
#include <stdlib.h>
#include <time.h>

void selectionSort(int list[], int size);

int main(void)
{
	int i;
	int randNums[10];

	srand(time(NULL));

	printf("발생된 난수 : ");
	for (i = 0; i < 10; i++)
	{
		randNums[i] = rand() % 100;
		printf("%d ", randNums[i]);
	}
	printf("\n");

	printf("정렬 후 :     ");
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