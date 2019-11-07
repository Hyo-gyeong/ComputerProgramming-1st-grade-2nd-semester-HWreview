// LABHW3_4_1(다중집합) 
//수학에서 다중집합(multiset)은 원소의 중복을 허용한다
/*#include <stdio.h>
int main(void)
{
	int input, i, count = 0;
	int multiset[5];

	while (count < 5)
	{
		printf("다중집합에 추가할 원소: ");
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

//LABHW3_4_2(집합) (난이도 중상) 수학에서 집합(set)은 다중집합(multiset)과 다르게 원소의 중복을 허용하지 않는다.

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
		printf("다중집합에 추가할 원소: ");
		scanf("%d", &input);

		if(ifExist(multiset, input, 5))
			printf("이미 존재하는 원소\n");

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
