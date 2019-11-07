//LAB4_3 피보나치 수열의 값을 출력하려한다. 지시된 내용에 따 작업을 수행하시오.  
#include <stdio.h> 
int fibo(int n); 
int main(void) 
{ 
	 int n, idx; 
 
	 printf("몇개의 피보나치 수열값을 출력할까요?(3보다 큰 정수):"); 
	 scanf("%d", &n); 
 
	 for (idx = 0; idx < n; idx++) 
	 { 
		  printf("%5d ", fibo(idx));   
		  if ((idx + 1) % 5 == 0)   // 한줄에 5개씩 출력하기위해서..    
			  printf("\n"); 
	 } 
	 printf("\n"); 
} 
 
int fibo(int n) 
{ 
	 if (n == 0 || n == 1)   
		 return 1;/* 이곳에 코드 삽입 */ 
	 else  
		return fibo(n-1) + fibo(n-2);/* 이곳에 코드 삽입 */ 
} 