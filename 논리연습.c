 #include <stdio.h>
#define SIZE 12
int main(void)
{
	//��1: 1���� n������ ���� ���(1 + 2 + 3 + 4 +��+ n)

	/*int sum = 0;
	int i;
	int n = 10;

	for (i = 1; i <= n; i++)
		sum += i;
	printf("%d\n", sum);*/

	//��2: 1���� n������ ���� ���(1 * 2 * 3 *��* n)

	/*int mult = 1;
	int i;
	int n = 10;

	for (i = 1; i <= n; i++)
		mult *= i;
	printf("%d\n", mult);*/

	//�� 3-2: m�� n�� ����(m + m + �� + m) 

	/*int i;
	int sum = 0;
	int n = 2, m = 4;

	for (i = 0; i < n; i++)
		sum += m;
	printf("%d\n", sum);*/

	//�� 4-2: m�� n�� ����(m * m * �� * m)

	/*int i;
	int mult = 1;
	int m = 3, n = 5;

	for (i = 1; i <= n; i++)
		mult *= m;
	printf("%d\n", mult);*/

	// ��5: n���� ������ �о ������ ���, ����� ���(����1 + ����2 + ��+ ����n)

	//��6: n���� ������ �о �ִ밪�� ã�´�(����1, ...����n�� ���� ū ��)

	//�� 7: n �� ����� ã�´�(ã�� ����Ѵ�)

	/*int i;
	int n = 10;

	printf("���:");
	for (i = 1; i <= n; i++)
		if (n % i == 0)
			printf("%d ", i);*/

	//�� 8: n �� �Ҽ����� �ƴ����� �Ǻ��Ѵ�(�̴� �ƴϴٸ� ���)
 
	/*int i;
	int n = 1223;

	if (isPrime(n))
		printf("�Ҽ��̴�.\n");
	else
		printf("�Ҽ��� �ƴϴ�.\n");*/

	//�� 9: � �迭�� ���ؼ� ���� �迭 �����

	/*int A[5] = {10, 20, 30, 40, 50};   
	int R[5];
	int i;

	printf("������ �� :");
	for (i = 0; i < 5; i++)
		printf("%3d", A[i]);
	printf("\n������ �� :");
	for (i = 0; i < 5; i++)
	{
		R[i] = A[5-i-1];
		printf("%3d", R[i]);
	}
	printf("\n");*/

	//��10: �� ���� �迭�� �������� �Ǻ�(�Ͽ� ���� �ٸ��ٸ� �߷�)

	/*int a[10], b[10];
	int i;
	int asize = 0, bsize = 0;

	printf("�迭 �ΰ��� �Է��ϼ���\n");

	printf("ù��° �迭�� ���� : ");
	scanf("%d", &asize);
	for (i = 0; i < asize; i++)
		scanf("%d", &a[i]);
	a[i+1] = '\0';

	printf("�ι�° �迭�� ���� : ");
	scanf("%d", &bsize);
	for (i = 0; i < bsize; i++)
		scanf("%d", &b[i]);
	b[i+1] = '\0';
	
	if (isSameArray(a, b, asize, bsize))
		printf("�� �迭�� ����.\n");
	else
		printf("�� �迭�� �ٸ���.\n");*/

	//��11(����): �迭�� ���� ��������(Ȥ�� ��������)���� �����Ѵ�.
	
	/*int list[] = {5, 3, 8, 1, 2, 7};
	int i, temp, k;

	printf("���� �迭: ");
	for (i = 0; i < 6; i++)
		printf("%d ", list[i]); 

	printf("\n������������ ���� : ");
	
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

	//��12(Ž��) �迭���� � ��(Ž��Ű, search key)�� ���� ���Ұ� �ִ°��� �Ǻ� 

	/*int  arr[SIZE] = {11, 22, 33, 44, 55, 66, 11, 22, 33, 44, 55, 66};
	int search;

	printf("ã���� �ϴ� Ű����? ");
	scanf("%d", &search);
	
	if (searchKeyInArray(arr, SIZE, search) >= 0)
		printf("�ε��� %d�� ����\n", searchKeyInArray(arr, SIZE, search));
	else
		printf("����\n");*/

	//��13: � Ư���� ���� ���� ���ҵ��� ��� �迭�� �ִ´�.  
	//��: ������ 10�� �����鼭 Ȧ���̸� �迭 odd�� �ְ� ¦���̸� �迭 even�� �ִ´�.

	/* int oddIndex = 0;
	int evenIndex = 0;
	int nums[10], odd[10], even[10];
	int i;

	printf("10���� ���� �Է��ϼ��� : ");
	for (i = 0; i < 10; i++)
		scanf("%d", &nums[i]);

	for (i = 0; i < 10; i++)
	{
		if (nums[i] % 2 == 0) //¦��
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

	printf("¦�� ���� : ");
	for (i = 0; even[i] != '\0'; i++)
		printf("%d ", even[i]);

	printf("\nȦ�� ���� : ");
	for (i = 0; odd[i] != '\0'; i++)
		printf("%d ", odd[i]);*/

	//�� 15: �迭�� �����迭�� �ٲ۴� 

	/*int arr1[5] = {1,2,3,4,5};
	int arr2[6] = {1,2,3,4,5,6};
	int i, temp;

	printf("ù��° �迭 : ");
	for (i = 0; i < 5; i++)
		printf("%3d", arr1[i]);

	printf("\n�ι�° �迭 : ");
	for (i = 0; i < 6; i++)
		printf("%3d", arr2[i]);

	printf("\nù��° �迭 ������ : ");
	for (i = 0; i < 5/2; i++)
	{
		temp = arr1[i];
		arr1[i] = arr1[5-i-1];
		arr1[5-i-1] = temp;
	}
	for (i = 0; i < 5; i++)
		printf("%3d", arr1[i]);

	printf("\n�ι�° �迭 ������ : ");
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
int isPrime(int n) //�� 8
{    
	int i;    
	for (i = 2; i < n; i++)       
		if (n % i == 0)          
			return 0;
   return 1;
}
int isSameArray(int a[], int b[], int aSize, int bSize) //��10  aSize, bSize�� ���� �迭 a, b�� ũ��     
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