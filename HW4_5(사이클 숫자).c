/*HW4_5(����Ŭ ����) 
  HW4_5_1(�ݺ�) � ���� n�� ¦���� 2�� ������ Ȧ���� 3�� ���� ���� 1�� ���Ѵ�. 
  �̷��� �ؼ� ���� ������� ���ڸ� n���� ���� n=1�� �� ������ ���� �۾��� �ݺ��Ѵ�. 
*/

#include <stdio.h>
int main(void)
{
	int input;

	printf("Enter a number :");
	scanf("%d", &input);

	while ( input > 1)
	{
		printf("%d ", input);

		if (input % 2 == 0)
			input = input / 2;
		else
			input = input * 3 + 1;
	}
	printf("1\n");
}

//HW4_5_1(���)
/*#include <stdio.h>
int get_cycle_number(int n);
int main(void)
{
	int input;

	printf("Enter a number :");
	scanf("%d", &input);
	get_cycle_number(input);
}
int get_cycle_number(int n)
{
	if (n == 1)
		printf("%d\n", n);
	else if (n % 2 == 0)
	{
		printf("%d ", n);
		return get_cycle_number(n / 2);
	}
	else
	{
		printf("%d ", n);
		return get_cycle_number(n * 3 + 1);
	}
}*/