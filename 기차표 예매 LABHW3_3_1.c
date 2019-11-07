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

	printf("******좌석 예약 시스템******\n"); 

	while (askReservation() == 'y') 
	{     
		printSeats(seats, SIZE); 

		printf("몇번째 좌석? ");   
		scanf("%d", &seatChoice); 

		processReservation(seats, SIZE, seatChoice);

		while (getchar() != '\n'); // 버퍼 비움  
	} 
} 
char askReservation() 
{   
	char choice;

	printf("좌석을 예약하시겠습니까?");
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
				printf("이미 예약된 자리입니다.\n");
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