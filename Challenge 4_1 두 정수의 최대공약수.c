/*Challenge 4_1 두 정수의 최대공약수를 구하는 함수를 반복문을 이용하여 작성하시오. 
1)  
2) 유클리드 호제법을 이용한다!  
3) a를 b로 나누었때 몫이 q이고 나머지가 r이면, a와 b의 최대공약수는 b와 r의 최대공약수와 같다.  
4) R이 0인 경우 최대공약수는 b이다. 
*/
/*
#include <stdio.h> 
 
int gcd(int x, int y); 
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
	int remain;

	remain = x % y;
	do
	{	
		x = y;
		y = remain;
		remain = x % y;

	}while (remain > 0);

	return y;
 
}*/

// LAB7_2코드

#include <stdio.h> 
 
void main(void) 
{ 
     int n[] = {-1, 1, 2, 3, 4 }; 
     int *p1 = n; 
     int *p2 = p1; 
 
	 //printf("%d", *p1++);
	 //printf("%d", (*p1)++);
	 //위의 코드를 각각 돌리면 결과 같음. 즉 *p1++ = (*p1)++
	 printf("%d\n", n[0]);  
	 printf("%d\n", (*p1)++); 
     printf("%d\n", n[0]);  
 
     printf("%d\n", *p2++);  
     printf("%d\n", *p2);  
     printf("%d\n", *++p1); 
     printf("%d\n", *p1); 
} 