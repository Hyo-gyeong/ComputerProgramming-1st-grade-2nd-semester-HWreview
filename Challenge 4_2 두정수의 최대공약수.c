//Challenge 4_2 두정수의 최대공약수를 구하는 함수를 재귀함수을 이용하여 작성하시오
#include <stdio.h>
int main(void)
{
	int a, b, big, small; 
 
	printf("Enter two numbers: ");  
	scanf("%d %d", &a, &b); 
 
	if (a < b)  
	{  
		big = b;   
		small = a;  
	}  
	else  
	{  
		big = a;   
		small = b;  
	} 
 
	printf("%d와 %d의 최대공약수는 %d\n", big, small, gcd(big, small)); 
}
int gcd(int x, int y)
{
	if (x%y == 0)
		return y;
	else
		return gcd(y, x%y);
}