//LAB5_3 
/*#include <stdio.h> 
 
void main() 
{ 
	 char str[][10] = {"ABC", "abcd", "Hello"}; 
	 int i, j = 0; 
  
	 printf("��) str�� �޸� ũ��� %d�̴�.\n", sizeof(str)); 
	 for (i = 0; i < 3; i++) 
	 { 
		printf("%d��° ��Ʈ��: %s, ", i + 1, str[i]); 
		printf("�ƽ�Ű �ڵ尪: "); 
		 
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

	printf("��>�迭 test�� ������Ʈ�� ����մϴ�\n"); 
	for (i = 0; i < 4; i++)  
	{ 
		 printf("\n%d��° row: ", i + 1); 
		 for (j = 0; j < 3; j++)  
			 printf("%d ", test[i][j]);
	}

	printf("\n\n��>�迭 test�� ������Ʈ�� ����մϴ�\n"); 
	for (i = 0; i < 4; i++)  
	{ 
		 printf("\n%d��° row: ", i + 1);
		 test[i][2]--;
		 for (j = 0; j < 3; j++)  
		 {
			 printf("%d ", test[i][j]);
			 total += test[i][j];
		 }
	}

	printf("\n\n��>\n");
	printf("Total is %d\nAverage is %.2f\n\n", total, (double)total / 12); 

	printf("\n\n��>\n");
	total = 0;
	for (i = 0; i < 4; i++)  
	{ 
		 printf("\n%d��° row������ �ִ�: ", i + 1);
		 best = test[i][0];
		 for (j = 0; j < 2; j++)  
			if (best < test[i][j+1])
				best = test[i][j+1];
		 printf("%d", best);
		 total += best;
	}
	printf("\n�ִ��� ��: %d\n", total);

}