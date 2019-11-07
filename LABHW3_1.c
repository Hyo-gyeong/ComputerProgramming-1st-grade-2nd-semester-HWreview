//LABHW3_1(<���α׷��� ���� ����>����)
#include <stdio.h> 
int sumList(int arr[], int size);
int maxList(int arr[], int size);
int indexSearch(int arr[], int size, int key);

int main(void) 
{ 
	int list[10] = {10, 20, 30, 40, 50, 40, 30, 20, 10, 0};
	int value;    
	int keyIndex;   
	
	printf("���� %d\n", sumList(list, 10));    
	printf("���� ū ���� %d\n", maxList(list, 10));  
	printf("Ž���� ����? ");  
	scanf("%d", &value);  // value �� list�� �ִ°��� �Ǻ��Ͽ� "����" Ȥ�� "**°�� �ִ�"�� ��� 1 
	
	if (indexSearch(list, 10, value) >= 0)
		printf("%d�ε����� �ִ�.\n", indexSearch(list, 10, value));
	else
		printf("����.\n");

	return 0; 
}  
int sumList(int arr[], int size) 
{  
	int i, total = 0;  
	
	for (i = 0; i < size; i++)   
		total += arr[i];  
	return total; 
} 
int maxList(int arr[], int size) 
{ 
	int best = -100;
	int i;

	for (i = 1; i < size; i++)
		if (arr[i-1] < arr[i])
			best = arr[i];
	return best;
} 
int indexSearch(int arr[], int size, int key)
{ 
	int i;

	for (i = 0; i < size; i++)
		if (arr[i] == key)
			return i;
	return -1;
} 
