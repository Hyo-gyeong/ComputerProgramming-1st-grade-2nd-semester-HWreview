//LABHW3_3_2
//����: ���� �ڸ���ŭ �����ڼ��� ��Ȯ�� �Էµȴٰ� ��������
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
	int count = 0;
	int people;

	printf("******�¼� ���� �ý���******\n"); 

	while (count < 10) 
	{     
		printSeats(seats, SIZE); 
		people = askReservation();
		count += people;
		processReservation(seats, SIZE, people);

		while (getchar() != '\n'); // ���� ���  
	} 
} 
char askReservation() 
{   
	int people;

	printf("�¼��� �����Ͻðڽ��ϱ�?(���)");
	scanf("%d", &people);

	return people;
} 
void processReservation(int s[], int size, int seatNumber)
{  
	int i;
	int fromhere;

	for (i = 0; i < size; i++)//**
		if (s[i] == 0)
		{
			fromhere = i;
			break;
		}

	for (i = 0; i < seatNumber; i++)
	{
		s[fromhere+i] = 1;
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

//LABHW3_3_challenge ���� ������ ������ ���� �����϶�. 
//����: ���� �¼����� ���� �ڸ��� �����Ϸ��� �� ��      <���࿹ B> ������ �� �� ���� �ο����� ����Ѵ� 
#define SIZE 10 
#include <stdio.h> 

char askReservation();
void printSeats(int s[], int size);
void processReservation(int s[], int size, int seatNumber); 

int main(void) // �������� ���� 
{  
	int seatChoice;
	int seats[SIZE] = {0}; 
	int count = 0;
	int people;

	printf("******�¼� ���� �ý���******\n"); 

	while (count < 10) 
	{     
		printSeats(seats, SIZE); 
		people = askReservation();
		count += people;
		processReservation(seats, SIZE, people);

		while (getchar() != '\n'); // ���� ���  
	} 
} 
char askReservation() 
{   
	int people;

	printf("�¼��� �����Ͻðڽ��ϱ�?(���)");
	scanf("%d", &people);

	return people;
} 
void processReservation(int s[], int size, int seatNumber)
{  
	int i;
	int fromhere;

	for (i = 0; i < size; i++)//**
		if (s[i] == 0)
		{
			fromhere = i;
			break;
		}
		
	for (i = 0; i < seatNumber; i++)
	{
		s[fromhere+i] = 1;
		if (fromhere + i == 9){
			printf(">>>%d���� ���� �ȵ�\n", seatNumber - i - 1);
			break;
		}
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