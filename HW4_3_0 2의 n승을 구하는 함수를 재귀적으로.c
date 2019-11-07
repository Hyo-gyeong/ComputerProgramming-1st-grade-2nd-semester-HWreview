// HW4_3_0 2의 n승을 구하는 함수를 재귀적으로 구현해 보자. 주어진 main은 그대로 사용한다.
/*#include <stdio.h> 
 
int twoPower(int x); 
int main(void) 
{  
	int n;  printf("Enter a number: ");  
	scanf("%d", &n); 
 
	printf("2의 %d승은 %d이다\n", n, twoPower(n)); 
} 
 
int twoPower(int x) 
{  
	if (x == 0)   //이곳에 적절한 return문을 넣는다.  
		return 1;
	else   //이곳에 적절한 return문을 넣는다. 
		return 2 * twoPower(x-1);
} 
*/

//HW4_3_1(이를 제출한다) x의 y승을 구하는 함수를 재귀적으로 구현해보자. 주어진 main은 그대로 사용한다.
/*#include <stdio.h> 
 
int xPoswer(int x, int y); 
int main(void) 
{  
	int x, y;  
	printf("Enter two numbers: ");  
	scanf("%d %d", &x, &y); 
 
	printf("%d의 %d승은 %d이다\n", x, y, xPower(x, y)); 
} 
 
int xPower(int x, int y) 
{  
	if (y == 0)   //이곳에 적절한 return문을 넣는다. 
		return 1;
	else   //이곳에 적절한 return문을 넣는다. 
		return x * xPower(x,y-1);
} */

/*HW4_4 (조합의 수-순환) 
 
수학에서 조합은 n개에서 r개를 뽑는 가지 수이다. 
조합은 아래와 같이 재귀적으로 정의한다. 
조합의 가지 수를 구하는 함수를 comb라고 하자.
아래의 정의를 보고 comb 함수를 recursion을 이용하여 완성하시오.   
nCr  = 1 (if r = 0 or r = n)   = n-1Cr-1 + n-1Cr */

#include<stdio.h>
int comb(int n, int r)
{   
	if (r == 0 || r == n)
		return 1;
	else
		return comb(n-1, r-1) + comb(n-1, r);
} 
int main(void) 
{ 
	int n, r; 
 
	printf("Enter n and r:"); 
	scanf("%d %d", &n, &r);

	printf("%d\n", comb(n, r)); 
	return 0;
} 