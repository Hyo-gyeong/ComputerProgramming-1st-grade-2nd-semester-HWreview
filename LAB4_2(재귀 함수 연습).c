//LAB4_2(재귀 함수 연습) 왼편에 주어진 sum(int n)은 1부터 n까지의 합을 구해 반환해 주는 함수이다.
#include <stdio.h> 
int sum_rec(int); 
void main() 
{ 
	int n; 
	printf("Enter a number: ");
	scanf("%d", &n); 
	printf("1부터 %d까지의 합은 %d입니다,\n", n, sum_rec(n)); 
} 
 
// 재귀함수 이용 
int sum_rec(int n) 
{ 
	if ( n == 1 )   // 이 곳 코드 삽입 
		return  1; 
	else 
		return  n + sum_rec(n-1);  
} 