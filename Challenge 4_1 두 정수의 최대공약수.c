/*Challenge 4_1 �� ������ �ִ������� ���ϴ� �Լ��� �ݺ����� �̿��Ͽ� �ۼ��Ͻÿ�. 
1)  
2) ��Ŭ���� ȣ������ �̿��Ѵ�!  
3) a�� b�� �������� ���� q�̰� �������� r�̸�, a�� b�� �ִ������� b�� r�� �ִ������� ����.  
4) R�� 0�� ��� �ִ������� b�̴�. 
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
 
	printf("%d�� %d�� �ִ������� %d\n", big, small, gcd(big, small)); 
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

// LAB7_2�ڵ�

#include <stdio.h> 
 
void main(void) 
{ 
     int n[] = {-1, 1, 2, 3, 4 }; 
     int *p1 = n; 
     int *p2 = p1; 
 
	 //printf("%d", *p1++);
	 //printf("%d", (*p1)++);
	 //���� �ڵ带 ���� ������ ��� ����. �� *p1++ = (*p1)++
	 printf("%d\n", n[0]);  
	 printf("%d\n", (*p1)++); 
     printf("%d\n", n[0]);  
 
     printf("%d\n", *p2++);  
     printf("%d\n", *p2);  
     printf("%d\n", *++p1); 
     printf("%d\n", *p1); 
} 