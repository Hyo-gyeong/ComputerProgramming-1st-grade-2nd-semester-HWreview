//LABHW3_2(�迭, �ִ밪 �ּҰ� ���ϱ�)
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
	printf("���� ū ���� %d\n���� ���� ���� %d\n", max, min);

} 
int main(void) // �������� ���� 
{  
	int a[10]; 
	//srand(time(NULL));  
	srand(100); // �������� �³� ���� ���ؼ� seed�� 100���� ����  
	initArray(a, 10);  
	printArray(a, 10);  
	printMinMax(a, 10); 
 
	return 0; 
}