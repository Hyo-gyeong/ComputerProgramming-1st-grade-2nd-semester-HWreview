//HW4_2(���̵� �߻�)(challenge) ��� �Լ��� ������� �ʰ� �ٽ� ���α׷��϶�.  �� main�Լ��� �״�� �ΰ� �Լ� fibo�� �����϶�
#include <stdio.h> 
int fibo(int n); 
int main(void) 
{ 
	int n, idx; 
 
	printf("��� �Ǻ���ġ �������� ����ұ��?(3���� ū ����):");  
	scanf("%d", &n); 
 
	for (idx = 0; idx < n; idx++)  
	{  
		printf("%d ", fibo(idx));   
		if ((idx + 1) % 5 == 0)   
			printf("\n");  
	}  
	printf("\n"); 
} 
 
int fibo(int n) // ��������� �������� �ʴ´� 
{ 
	int first = 1;
	int second = 1;
	int i, temp;

	if (n == 0 || n == 1)
		return 1;
	else
	{
		for (i = 1; i < n; i++)
		{
			temp = first; //**
			first = second;
			second = temp + second;
		}
		return second;
	}
} 