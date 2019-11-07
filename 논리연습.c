 #include <stdio.h>
#define SIZE 12
int main(void)
{
	//논리1: 1부터 n까지의 합을 계산(1 + 2 + 3 + 4 +…+ n)

	/*int sum = 0;
	int i;
	int n = 10;

	for (i = 1; i <= n; i++)
		sum += i;
	printf("%d\n", sum);*/

	//논리2: 1부터 n까지의 곱을 계산(1 * 2 * 3 *…* n)

	/*int mult = 1;
	int i;
	int n = 10;

	for (i = 1; i <= n; i++)
		mult *= i;
	printf("%d\n", mult);*/

	//논리 3-2: m을 n번 더함(m + m + … + m) 

	/*int i;
	int sum = 0;
	int n = 2, m = 4;

	for (i = 0; i < n; i++)
		sum += m;
	printf("%d\n", sum);*/

	//논리 4-2: m을 n번 곱합(m * m * … * m)

	/*int i;
	int mult = 1;
	int m = 3, n = 5;

	for (i = 1; i <= n; i++)
		mult *= m;
	printf("%d\n", mult);*/

	// 논리5: n개의 점수를 읽어서 총점을 계산, 평균을 계산(점수1 + 점수2 + …+ 점수n)

	//논리6: n개의 점수를 읽어서 최대값을 찾는다(점수1, ...점수n중 가장 큰 값)

	//논리 7: n 의 약수를 찾는다(찾아 출력한다)

	/*int i;
	int n = 10;

	printf("약수:");
	for (i = 1; i <= n; i++)
		if (n % i == 0)
			printf("%d ", i);*/

	//논리 8: n 이 소수인지 아닌지를 판별한다(이다 아니다를 출력)
 
	/*int i;
	int n = 1223;

	if (isPrime(n))
		printf("소수이다.\n");
	else
		printf("소수가 아니다.\n");*/

	//논리 9: 어떤 배열에 대해서 역순 배열 만들기

	/*int A[5] = {10, 20, 30, 40, 50};   
	int R[5];
	int i;

	printf("뒤집기 전 :");
	for (i = 0; i < 5; i++)
		printf("%3d", A[i]);
	printf("\n뒤집은 후 :");
	for (i = 0; i < 5; i++)
	{
		R[i] = A[5-i-1];
		printf("%3d", R[i]);
	}
	printf("\n");*/

	//논리10: 두 개의 배열이 같은가를 판별(하여 같다 다르다를 추력)

	/*int a[10], b[10];
	int i;
	int asize = 0, bsize = 0;

	printf("배열 두개를 입력하세요\n");

	printf("첫번째 배열의 개수 : ");
	scanf("%d", &asize);
	for (i = 0; i < asize; i++)
		scanf("%d", &a[i]);
	a[i+1] = '\0';

	printf("두번째 배열의 개수 : ");
	scanf("%d", &bsize);
	for (i = 0; i < bsize; i++)
		scanf("%d", &b[i]);
	b[i+1] = '\0';
	
	if (isSameArray(a, b, asize, bsize))
		printf("두 배열이 같다.\n");
	else
		printf("두 배열이 다르다.\n");*/

	//논리11(정렬): 배열의 값을 오름차순(혹은 내림차순)으로 정렬한다.
	
	/*int list[] = {5, 3, 8, 1, 2, 7};
	int i, temp, k;

	printf("원래 배열: ");
	for (i = 0; i < 6; i++)
		printf("%d ", list[i]); 

	printf("\n오름차순으로 정렬 : ");
	
	for (i = 0; i < 6; i++)
	{
		for (k = 0; k < 5; k++)
		{
			if (list[k] > list[k+1])
			{
				temp = list[k];
				list[k] = list[k+1];
				list[k+1] = temp;
			}
		}
	}
	for (i = 0; i < 6; i++)
		printf("%d ", list[i]);*/

	//논리12(탐색) 배열에서 어떤 값(탐색키, search key)을 가진 원소가 있는가를 판별 

	/*int  arr[SIZE] = {11, 22, 33, 44, 55, 66, 11, 22, 33, 44, 55, 66};
	int search;

	printf("찾고자 하는 키값은? ");
	scanf("%d", &search);
	
	if (searchKeyInArray(arr, SIZE, search) >= 0)
		printf("인덱스 %d에 존재\n", searchKeyInArray(arr, SIZE, search));
	else
		printf("없음\n");*/

	//논리13: 어떤 특정한 값을 갖는 원소들을 모아 배열에 넣는다.  
	//예: 정수를 10개 읽으면서 홀수이면 배열 odd에 넣고 짝수이면 배열 even에 넣는다.

	/* int oddIndex = 0;
	int evenIndex = 0;
	int nums[10], odd[10], even[10];
	int i;

	printf("10개의 수를 입력하세요 : ");
	for (i = 0; i < 10; i++)
		scanf("%d", &nums[i]);

	for (i = 0; i < 10; i++)
	{
		if (nums[i] % 2 == 0) //짝수
		{
			even[evenIndex] = nums[i];
			evenIndex++;
		}
		else
		{
			odd[oddIndex] = nums[i];
			oddIndex++;
		}
	}
	even[evenIndex] = '\0';
	odd[oddIndex] = '\0';

	printf("짝수 원소 : ");
	for (i = 0; even[i] != '\0'; i++)
		printf("%d ", even[i]);

	printf("\n홀수 원소 : ");
	for (i = 0; odd[i] != '\0'; i++)
		printf("%d ", odd[i]);*/

	//논리 15: 배열을 역순배열로 바꾼다 

	/*int arr1[5] = {1,2,3,4,5};
	int arr2[6] = {1,2,3,4,5,6};
	int i, temp;

	printf("첫번째 배열 : ");
	for (i = 0; i < 5; i++)
		printf("%3d", arr1[i]);

	printf("\n두번째 배열 : ");
	for (i = 0; i < 6; i++)
		printf("%3d", arr2[i]);

	printf("\n첫번째 배열 뒤집기 : ");
	for (i = 0; i < 5/2; i++)
	{
		temp = arr1[i];
		arr1[i] = arr1[5-i-1];
		arr1[5-i-1] = temp;
	}
	for (i = 0; i < 5; i++)
		printf("%3d", arr1[i]);

	printf("\n두번째 배열 뒤집기 : ");
	for (i = 0; i < 6/2; i++)
	{
		temp = arr2[i];
		arr2[i] = arr2[6-i-1];
		arr2[6-i-1] = temp;
	}
	for (i = 0; i < 6; i++)
		printf("%3d", arr2[i]);
	printf("\n");*/


}
int isPrime(int n) //논리 8
{    
	int i;    
	for (i = 2; i < n; i++)       
		if (n % i == 0)          
			return 0;
   return 1;
}
int isSameArray(int a[], int b[], int aSize, int bSize) //논리10  aSize, bSize는 각각 배열 a, b의 크기     
{
	int i;

	if (aSize != bSize)
		return 0;
	else 
	{
		for (i = 0; i < aSize; i++)
			if (a[i] != b[i])
				return 0;
	return 1;
	}
}
int searchKeyInArray(int a[], int size, int searchKey) 
{
	int i;

	for (i = 0; i < size; i++)
		if (a[i] == searchKey)
			return i;
	return -1;
}