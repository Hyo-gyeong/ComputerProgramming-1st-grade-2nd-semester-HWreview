//LAB5_3 
/*#include <stdio.h> 
 
void main() 
{ 
	 char str[][10] = {"ABC", "abcd", "Hello"}; 
	 int i, j = 0; 
  
	 printf("가) str의 메모리 크기는 %d이다.\n", sizeof(str)); 
	 for (i = 0; i < 3; i++) 
	 { 
		printf("%d번째 스트링: %s, ", i + 1, str[i]); 
		printf("아스키 코드값: "); 
		 
		while (str[i][j] != '\0') 
		{ 
			printf("%d ", str[i][j]);
			j++;
		} 
		printf("\n"); 
		j = 0;
	 } 
}*/

// LAB5_4 
#include <stdio.h>
int main(void)
{
	int test[4][3] = { {8, 7}, {6, 5}, {1, 2}, {3, 4}};
	int i, j;
	int total = 0;
	int best;

	printf("나>배열 test의 엘리먼트를 출력합니다\n"); 
	for (i = 0; i < 4; i++)  
	{ 
		 printf("\n%d번째 row: ", i + 1); 
		 for (j = 0; j < 3; j++)  
			 printf("%d ", test[i][j]);
	}

	printf("\n\n다>배열 test의 엘리먼트를 출력합니다\n"); 
	for (i = 0; i < 4; i++)  
	{ 
		 printf("\n%d번째 row: ", i + 1);
		 test[i][2]--;
		 for (j = 0; j < 3; j++)  
		 {
			 printf("%d ", test[i][j]);
			 total += test[i][j];
		 }
	}

	printf("\n\n라>\n");
	printf("Total is %d\nAverage is %.2f\n\n", total, (double)total / 12); 

	printf("\n\n마>\n");
	total = 0;
	for (i = 0; i < 4; i++)  
	{ 
		 printf("\n%d번째 row에서의 최댓값: ", i + 1);
		 best = test[i][0];
		 for (j = 0; j < 2; j++)  
			if (best < test[i][j+1])
				best = test[i][j+1];
		 printf("%d", best);
		 total += best;
	}
	printf("\n최댓값의 합: %d\n", total);

}