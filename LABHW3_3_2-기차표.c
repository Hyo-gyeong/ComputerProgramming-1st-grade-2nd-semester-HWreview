//LABHW3_3_2
//가정: 남은 자리만큼 예매자수가 정확이 입력된다고 가정하자
//기차표 예매 LABHW3_3_1(<프로그래밍 논리의 이해>에서 다룬 PROJECT_좌석예약을 모듈화) 
#define SIZE 10 
#include <stdio.h> 

char askReservation();
void printSeats(int s[], int size);
void processReservation(int s[], int size, int seatNumber); 

int main(void) // 변경하지 마라 
{  
	int seatChoice;
	int seats[SIZE] = {0}; 
	int count = 0;
	int people;

	printf("******좌석 예약 시스템******\n"); 

	while (count < 10) 
	{     
		printSeats(seats, SIZE); 
		people = askReservation();
		count += people;
		processReservation(seats, SIZE, people);

		while (getchar() != '\n'); // 버퍼 비움  
	} 
} 
char askReservation() 
{   
	int people;

	printf("좌석을 예약하시겠습니까?(몇명)");
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

//LABHW3_3_challenge 위의 문제를 다음과 같이 수정하라. 
//가정: 남은 좌석보다 많은 자리를 예약하려고 할 때      <실행예 B> 예약을 할 수 없는 인원수를 출력한다 
#define SIZE 10 
#include <stdio.h> 

char askReservation();
void printSeats(int s[], int size);
void processReservation(int s[], int size, int seatNumber); 

int main(void) // 변경하지 마라 
{  
	int seatChoice;
	int seats[SIZE] = {0}; 
	int count = 0;
	int people;

	printf("******좌석 예약 시스템******\n"); 

	while (count < 10) 
	{     
		printSeats(seats, SIZE); 
		people = askReservation();
		count += people;
		processReservation(seats, SIZE, people);

		while (getchar() != '\n'); // 버퍼 비움  
	} 
} 
char askReservation() 
{   
	int people;

	printf("좌석을 예약하시겠습니까?(몇명)");
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
			printf(">>>%d명은 예약 안됨\n", seatNumber - i - 1);
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