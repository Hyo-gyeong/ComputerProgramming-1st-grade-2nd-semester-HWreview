// LABHW3_4_1(��������) 
//���п��� ��������(multiset)�� ������ �ߺ��� ����Ѵ�
/*#include <stdio.h>
int main(void)
{
	int input, i, count = 0;
	int multiset[5];

	while (count < 5)
	{
		printf("�������տ� �߰��� ����: ");
		scanf("%d", &input);
		multiset[count] = input;
		count++;

		printf("{");
		for(i = 0; i < count; i++)
		{
			if (i == 0)
				printf("%d", multiset[i]);
			else
				printf(", %d", multiset[i]);
		}
		printf("}\n");
	}

}*/

//LABHW3_4_2(����) (���̵� �߻�) ���п��� ����(set)�� ��������(multiset)�� �ٸ��� ������ �ߺ��� ������� �ʴ´�.

#include <stdio.h>
int ifExist (int multi[], int ifsame, int totalCount)
{
	int i;

	for (i = 0; i < totalCount; i++)
		if (multi[i] == ifsame)
			return 1;
	return 0;
}

int main(void)
{
	int input, i, count = 0;
	int multiset[5];

	while (count < 5)
	{
		printf("�������տ� �߰��� ����: ");
		scanf("%d", &input);

		if(ifExist(multiset, input, 5))
			printf("�̹� �����ϴ� ����\n");

		else
		{
			multiset[count] = input;
			count++;
			printf("{");
			for(i = 0; i < count; i++)
			{
				if (i == 0)
					printf("%d", multiset[i]);
				else
					printf(", %d", multiset[i]);
			}
			printf("}\n");
		}
	}
}
