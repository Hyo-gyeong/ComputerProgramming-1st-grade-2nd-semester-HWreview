//���� 12th �������� �ٷ������ �͵�- �迭�� �Լ� �Ű������� �����ϱ�.

//����a
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

/*���� b
#include <stdio.h> 
void printArray(int a[], int size); 
void changeArray(int b[], int size); 
int sumArray(int c[], int size); 

int main(void) 
{ 
	int data[5] = {10, 20, 30, 40, 50}; 

	printArray(data, 5); // ȣ���� ���� �μ������� �迭�� �̸��� ����Ѵ�. 
	changeArray(data, 5); // 5��ſ� sizeof(data) / sizeof(int)�� �ᵵ �ȴ�. 
	printArray(data, 5);
	printf("�迭�� ���� %d\n", sumArray(data, 5)); 
} 
void printArray(int a[], int size) // �տ� �� �״�� 
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


//�����غ��� ����
#include <stdio.h> 
void printArray(int a[], int size);
void test(int arr[], int size, int num);
int main(void)
{
	int data[5] = {10, 20, 30, 40, 50};
	int number = 10; 

	printf("�迭 data��");
	printArray(data, 5);  

	printf("number�� %d\n", number); 
	test(data, 5, number); 

	printf("�迭 data��"); 
	printArray(data, 5);  
	printf("number�� %d\n", number); 
} 

void printArray(int a[], int size)
{ 
	int i;
	for (i = 0; i < size; i++)
		printf("%d ", a[i]);
	printf("\n");
	return;
}
void test(int a[], int size, int num)  // �Ű����� a�� ��ȭ��Ű�� ���� �μ� data�� ��ȭ��Ű�� �� 
										// �׷��� �Ű����� num�� ��ȭ���ѵ� �μ� number���� ���� ����
{ 
	int i; 
	for (i = 0; i < size; i++) 
		a[i] *= 10;  // a�� ���ҵ��� 10�� 
	num *= 10; // num�� 10��  return; 
} 