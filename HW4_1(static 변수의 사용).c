//HW4_1(static 변수의 사용)(난이도 중하)(1학기 내용 복습) 아래와 같이 입금만을 처리하는 프로그램을 완성하라

#include <stdio.h>
void save(int money);
int main(void)
{
	int input;
	int currentMoney = 0;

	do
	{
		printf("저금할 금액 (-1은 탈출): ");
		scanf("%d", &input);
		if (input == -1) //**
		{
			printf("현재까지의 금액: ");
			save(currentMoney);
		}
		else //**
		{
			printf("현재까지의 금액: ");
			currentMoney += input;
			save(currentMoney);
		}

		printf("\n");

	}while(input != -1);

	printf("입금완료!\n");
	
}
void save(int money)
{
	if (money >= 0)
		printf("%d", money); 
	else
		printf("%d", money +1);
}