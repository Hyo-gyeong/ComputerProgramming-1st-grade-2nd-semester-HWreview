// HW4_3_0 2�� n���� ���ϴ� �Լ��� ��������� ������ ����. �־��� main�� �״�� ����Ѵ�.
/*#include <stdio.h> 
 
int twoPower(int x); 
int main(void) 
{  
	int n;  printf("Enter a number: ");  
	scanf("%d", &n); 
 
	printf("2�� %d���� %d�̴�\n", n, twoPower(n)); 
} 
 
int twoPower(int x) 
{  
	if (x == 0)   //�̰��� ������ return���� �ִ´�.  
		return 1;
	else   //�̰��� ������ return���� �ִ´�. 
		return 2 * twoPower(x-1);
} 
*/

//HW4_3_1(�̸� �����Ѵ�) x�� y���� ���ϴ� �Լ��� ��������� �����غ���. �־��� main�� �״�� ����Ѵ�.
/*#include <stdio.h> 
 
int xPoswer(int x, int y); 
int main(void) 
{  
	int x, y;  
	printf("Enter two numbers: ");  
	scanf("%d %d", &x, &y); 
 
	printf("%d�� %d���� %d�̴�\n", x, y, xPower(x, y)); 
} 
 
int xPower(int x, int y) 
{  
	if (y == 0)   //�̰��� ������ return���� �ִ´�. 
		return 1;
	else   //�̰��� ������ return���� �ִ´�. 
		return x * xPower(x,y-1);
} */

/*HW4_4 (������ ��-��ȯ) 
 
���п��� ������ n������ r���� �̴� ���� ���̴�. 
������ �Ʒ��� ���� ��������� �����Ѵ�. 
������ ���� ���� ���ϴ� �Լ��� comb��� ����.
�Ʒ��� ���Ǹ� ���� comb �Լ��� recursion�� �̿��Ͽ� �ϼ��Ͻÿ�.   
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