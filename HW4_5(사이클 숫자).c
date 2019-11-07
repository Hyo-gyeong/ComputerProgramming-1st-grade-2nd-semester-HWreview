/*HW4_5(사이클 숫자) 
  HW4_5_1(반복) 어떤 정수 n이 짝수면 2로 나누고 홀수면 3을 곱한 다음 1을 더한다. 
  이렇게 해서 새로 만들어진 숫자를 n으로 놓고 n=1이 될 때까지 같은 작업을 반복한다. 
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

//HW4_5_1(재귀)
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