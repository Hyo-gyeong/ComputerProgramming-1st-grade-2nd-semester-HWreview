//LABHW3_1(<프로그래밍 논리의 이해>복습)
#include <stdio.h> 
int sumList(int arr[], int size);
int maxList(int arr[], int size);
int indexSearch(int arr[], int size, int key);

int main(void) 
{ 
	int list[10] = {10, 20, 30, 40, 50, 40, 30, 20, 10, 0};
	int value;    
	int keyIndex;   
	
	printf("합은 %d\n", sumList(list, 10));    
	printf("가장 큰 수는 %d\n", maxList(list, 10));  
	printf("탐색할 값은? ");  
	scanf("%d", &value);  // value 가 list에 있는가를 판별하여 "없다" 혹은 "**째에 있다"를 출력 1 
	
	if (indexSearch(list, 10, value) >= 0)
		printf("%d인덱스에 있다.\n", indexSearch(list, 10, value));
	else
		printf("없다.\n");

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
