//LAB1_2(for ��, �迭)���� �߻����Ѽ� ����غ���.
#include <stdio.h> 
#include <stdlib.h>
#include <time.h> 
int main(void) 
{  
	int data[100]; 
	int num, i;
	int best = -1;
	
	// srand(time(NULL));  // �־��� ���� ����� ��ġ�ϳ��� �������ؼ� comment ó����.
							// ���� ����� comment ó���� ����ϰ� ������Ѻ�����. 
 
	printf("Enter the number of random numbers:(<= 100): ");  
	scanf("%d", &num); 
 
	for (i = 0; i < num; i++)
	{
		data[i] = rand() % 100;
		if (data[i] > best)
			best = data[i];
	}
 
	printf("�ִ��� %d\n", best);
	printf("-----------------------------\n");
	printf("�߻��� ������\n");
	for (i = 0; i < num; i++)
	{
		printf("%4d", data[i]);
		if ((i+1) % 5 == 0)
			printf("\n");
	}
	printf("\n"); 
	return 0;
}