 /*HW5_2 문제 2)의 배열 A(arr1)을 선언과 동시에 초기화하고 
이 배열 A의 값을 대입문을 이용하여 배열 B(arr2)와 배열 C(arr3)에 값을 넣어서 출력하는 프로그램을 작성하라.*/

#include <stdio.h> 
int main(void)
{ 
	 int arr1[2][4] = {1, 2, 3, 4, 5, 6, 7, 8}; 
	 int arr2[4][2]; 
	 int arr3[8]; 
	 int i, j;

	 printf("배열 A\n");
	 for (i = 0; i < 2; i++)
	 {
		 for (j = 0; j < 4; j++)
			 printf("%5d", arr1[i][j]);
		 printf("\n");
	 }

	 printf("배열 B\n");
	 for (j = 0; j < 4; j++)
	 {
		 for (i = 0; i < 2; i++)
			 printf("%5d", arr1[i][j]);
		 printf("\n");
	 }
	 printf("배열 C\n");
	 for (i = 0; i < 2; i++)
		 for (j = 0; j < 4; j++)
			 printf("%5d", arr1[i][j]);
	 printf("\n");

} 