//HW4_2(난이도 중상)(challenge) 재귀 함수를 사용하지 않고 다시 프로그램하라.  즉 main함수는 그대로 두고 함수 fibo만 변경하라
#include <stdio.h> 
int fibo(int n); 
int main(void) 
{ 
	int n, idx; 
 
	printf("몇개의 피보나치 수열값을 출력할까요?(3보다 큰 정수):");  
	scanf("%d", &n); 
 
	for (idx = 0; idx < n; idx++)  
	{  
		printf("%d ", fibo(idx));   
		if ((idx + 1) % 5 == 0)   
			printf("\n");  
	}  
	printf("\n"); 
} 
 
int fibo(int n) // 재귀적으로 구현하지 않는다 
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