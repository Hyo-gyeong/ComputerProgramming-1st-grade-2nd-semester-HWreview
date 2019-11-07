//LAB1_2(for 문, 배열)난수 발생시켜서 출력해보기.
#include <stdio.h> 
#include <stdlib.h>
#include <time.h> 
int main(void) 
{  
	int data[100]; 
	int num, i;
	int best = -1;
	
	// srand(time(NULL));  // 주어진 실행 결과와 일치하나를 보기위해서 comment 처리함.
							// 최종 실행시 comment 처리를 취소하고 실행시켜보세요. 
 
	printf("Enter the number of random numbers:(<= 100): ");  
	scanf("%d", &num); 
 
	for (i = 0; i < num; i++)
	{
		data[i] = rand() % 100;
		if (data[i] > best)
			best = data[i];
	}
 
	printf("최댓값은 %d\n", best);
	printf("-----------------------------\n");
	printf("발생된 난수는\n");
	for (i = 0; i < num; i++)
	{
		printf("%4d", data[i]);
		if ((i+1) % 5 == 0)
			printf("\n");
	}
	printf("\n"); 
	return 0;
}