//HW4_1(static ������ ���)(���̵� ����)(1�б� ���� ����) �Ʒ��� ���� �Աݸ��� ó���ϴ� ���α׷��� �ϼ��϶�

#include <stdio.h>
void save(int money);
int main(void)
{
	int input;
	int currentMoney = 0;

	do
	{
		printf("������ �ݾ� (-1�� Ż��): ");
		scanf("%d", &input);
		if (input == -1) //**
		{
			printf("��������� �ݾ�: ");
			save(currentMoney);
		}
		else //**
		{
			printf("��������� �ݾ�: ");
			currentMoney += input;
			save(currentMoney);
		}

		printf("\n");

	}while(input != -1);

	printf("�ԱݿϷ�!\n");
	
}
void save(int money)
{
	if (money >= 0)
		printf("%d", money); 
	else
		printf("%d", money +1);
}