//LABHW3_2(배열, 최대값 최소값 구하기)
#include <stdio.h>
#include <stdlib.h> 
#include <time.h> 

void initArray(int arr[], int size) 
{ 
	int i; 
	
	for (i = 0; i < size; i++) 
		arr[i] = rand() % 100; 
	return; 
} 
void printArray(int arr[], int size) 
{ 
	int i; 

	for (i = 0; i < size; i++) 
		printf("%d ", arr[i]); 
	printf("\n"); 
} 
void printMinMax(int arr[], int size) 
{  
	int max = -1000, min = 1000;
	int i;

	for (i = 0; i < size; i++)
	{
		if (max < arr[i])
			max = arr[i];
		if (min > arr[i])
			min = arr[i];
	}
	printf("가장 큰 값은 %d\n가장 작은 값은 %d\n", max, min);

} 
int main(void) // 변경하지 말라 
{  
	int a[10]; 
	//srand(time(NULL));  
	srand(100); // 실행결과가 맞나 보기 위해서 seed를 100으로 고정  
	initArray(a, 10);  
	printArray(a, 10);  
	printMinMax(a, 10); 
 
	return 0; 
}