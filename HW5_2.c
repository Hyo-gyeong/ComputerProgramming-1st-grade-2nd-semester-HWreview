 /*HW5_2 ���� 2)�� �迭 A(arr1)�� ����� ���ÿ� �ʱ�ȭ�ϰ� 
�� �迭 A�� ���� ���Թ��� �̿��Ͽ� �迭 B(arr2)�� �迭 C(arr3)�� ���� �־ ����ϴ� ���α׷��� �ۼ��϶�.*/

#include <stdio.h> 
int main(void)
{ 
	 int arr1[2][4] = {1, 2, 3, 4, 5, 6, 7, 8}; 
	 int arr2[4][2]; 
	 int arr3[8]; 
	 int i, j;

	 printf("�迭 A\n");
	 for (i = 0; i < 2; i++)
	 {
		 for (j = 0; j < 4; j++)
			 printf("%5d", arr1[i][j]);
		 printf("\n");
	 }

	 printf("�迭 B\n");
	 for (j = 0; j < 4; j++)
	 {
		 for (i = 0; i < 2; i++)
			 printf("%5d", arr1[i][j]);
		 printf("\n");
	 }
	 printf("�迭 C\n");
	 for (i = 0; i < 2; i++)
		 for (j = 0; j < 4; j++)
			 printf("%5d", arr1[i][j]);
	 printf("\n");

} 