//프논 12th 수업에서 다루어지는 것들- 배열을 함수 매개변수로 전달하기.

//연습a
/*#include <stdio.h> 
void printArray(int a[], int size); 
int main(void) 
{ 
	int list1[5] = {10, 20, 30, 40, 50}; 
	int list2[3] = {100, 200, 300}; 

	printArray(list1, 5); 
	printArray(list2, 3); 

}
void printArray(int a[], int size)
{  
	int i;

	for (i = 0; i < size; i++)
		printf("%d ", a[i]);
	printf("\n");
}*/

/*연습 b
#include <stdio.h> 
void printArray(int a[], int size); 
void changeArray(int b[], int size); 
int sumArray(int c[], int size); 

int main(void) 
{ 
	int data[5] = {10, 20, 30, 40, 50}; 

	printArray(data, 5); // 호출할 때의 인수에서는 배열의 이름을 사용한다. 
	changeArray(data, 5); // 5대신에 sizeof(data) / sizeof(int)를 써도 된다. 
	printArray(data, 5);
	printf("배열의 합은 %d\n", sumArray(data, 5)); 
} 
void printArray(int a[], int size) // 앞에 것 그대로 
{ 
	int i; 

	for (i = 0; i < size; i++) 
		printf("%d ", a[i]); 
	printf("\n"); 
	return; 
} 
void changeArray(int b[], int size) 
{ 
	int i; 

	for (i = 0; i < size; i++) 
		b[i] *= 10; 
	return; 
} 
int sumArray(int c[], int size) 
{  
	int i, sum = 0;  
	
	for (i = 0; i < size; i++)    
		sum += c[i];  
	return sum; 
}*/


//생각해보는 예제
#include <stdio.h> 
void printArray(int a[], int size);
void test(int arr[], int size, int num);
int main(void)
{
	int data[5] = {10, 20, 30, 40, 50};
	int number = 10; 

	printf("배열 data는");
	printArray(data, 5);  

	printf("number는 %d\n", number); 
	test(data, 5, number); 

	printf("배열 data는"); 
	printArray(data, 5);  
	printf("number는 %d\n", number); 
} 

void printArray(int a[], int size)
{ 
	int i;
	for (i = 0; i < size; i++)
		printf("%d ", a[i]);
	printf("\n");
	return;
}
void test(int a[], int size, int num)  // 매개변수 a를 변화시키는 것은 인수 data를 변화시키는 것 
										// 그러나 매개변수 num을 변화시켜도 인수 number에는 영향 없음
{ 
	int i; 
	for (i = 0; i < size; i++) 
		a[i] *= 10;  // a의 원소들을 10배 
	num *= 10; // num을 10배  return; 
} 