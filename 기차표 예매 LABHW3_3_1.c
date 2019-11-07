//����ǥ ���� LABHW3_3_1(<���α׷��� ���� ����>���� �ٷ� PROJECT_�¼������� ���ȭ) 
#define SIZE 10 
#include <stdio.h> 

char askReservation();
void printSeats(int s[], int size);
void processReservation(int s[], int size, int seatNumber); 

int main(void) // �������� ���� 
{  
	int seatChoice;
	int seats[SIZE] = {0}; 

	printf("******�¼� ���� �ý���******\n"); 

	while (askReservation() == 'y') 
	{     
		printSeats(seats, SIZE); 

		printf("���° �¼�? ");   
		scanf("%d", &seatChoice); 

		processReservation(seats, SIZE, seatChoice);

		while (getchar() != '\n'); // ���� ���  
	} 
} 
char askReservation() 
{   
	char choice;

	printf("�¼��� �����Ͻðڽ��ϱ�?");
	scanf("%c", &choice);

	return choice;
} 
void processReservation(int s[], int size, int seatNumber)
{  
	int i;

	for (i = 0; i < size; i++)
		if (i == seatNumber)
		{
			if (s[i-1] == 1)
			{
				printf("�̹� ����� �ڸ��Դϴ�.\n");
				return;
			}
			else
				s[i-1] = 1;
		}

	printf("---------------------\n");
	printf("1 2 3 4 5 6 7 8 9 10\n");
	printf("---------------------\n");
	for (i = 0; i < size; i++)
		printf("%d ", s[i]);
	printf("\n");
} 
void printSeats(int s[], int size) 
{  
	int i;

	printf("---------------------\n");
	printf("1 2 3 4 5 6 7 8 9 10\n");
	printf("---------------------\n");
	for (i = 0; i < size; i++)
		printf("%d ", s[i]);
	printf("\n");
} 