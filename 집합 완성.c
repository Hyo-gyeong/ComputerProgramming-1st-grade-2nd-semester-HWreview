#include <stdio.h>////////////다시다시
#include <stdlib.h>

#define MAX_SET_SIZE 10
#define HAVE_ELEMENT 1
#define DO_NOT_HAVE_ELEMENT 0

int hasElement(int set[], int size, int element);
int setUnion(int set1[], int size1, int set2[], int size2, int setResult[]);
int setIntersecton(int set1[], int size1, int set2[], int size2, int setResult[]);
int setComplements(int set1[], int size1, int set2[], int size2, int setResult[]);
void printSet(int set[], int size);
int addOneElement(int set[], int size, int element);

int main(int argc, char *argv[])
{
	 int i;
	 int setA[MAX_SET_SIZE];
	 int setB[MAX_SET_SIZE];
	 int setC[MAX_SET_SIZE*2];
	 int sizeA;
	 int sizeB;
	 int sizeC;

	 printf("Enter the size of Set A:");
	 scanf("%d",&sizeA);

	 i = 0;
	 while( i < sizeA )
	 {
		 printf("Enter the number for Set A (%d/%d):", i+1,sizeA );
		 scanf( "%d", &setA[i] );
		 i = addOneElement(setA, i, setA[i]);
	 }
	 printf("Enter the size of Set B:");
	 scanf("%d",&sizeB);
	 i=0;
	 while( i < sizeB )
	 {
		 printf("Enter the number for Set B (%d/%d):", i+1, sizeB );
		 scanf( "%d", &setB[i] );
		 i = addOneElement(setB, i, setB[i]);
	 }
	 printf("\nSet A: ");
	 printSet( setA, sizeA );
	 printf("\nSet B: ");
	 printSet( setB, sizeB );
	 sizeC = setUnion( setA, sizeA, setB, sizeB, setC ); // Union, setC is the result set
	 printf("\nUnion of setA and setB: ");
	 printSet( setC, sizeC );
	 sizeC = setIntersecton( setA, sizeA, setB, sizeB, setC ); //Intersection, setC is the result set
	 printf("\nIntersection of setA and setB: ");
	 printSet( setC, sizeC );
	 sizeC = setComplements( setA, sizeA, setB, sizeB, setC ); //Complements, setC is the result set
	 printf("\nSet-theoretic difference of setA and setB (setA - setB): ");
	 printSet( setC, sizeC );
	 return 0;
}
// If the set has the element, returns 1;
// else return 0;
int hasElement(int set[], int size, int element)
{
	int i = 0;

	for( i = 0; i < size; i++ )
		if( set[i] == element )
			return HAVE_ELEMENT; // we found it!
	return DO_NOT_HAVE_ELEMENT;
}
// 원소를 집합에 추가. 이미 존재하면 추가하지 않고 redundant라고 출력한다. 현재의 집합 크기를 반환한다.
int addOneElement(int set[], int size, int element)
{
	if(hasElement(set, size, element) == DO_NOT_HAVE_ELEMENT)
	{
		set[size++] = element;
		return size++;
	}
	else
	{
		printf("Rebundant. Retry\n");
		return size;
	}
}
void printSet(int set[], int size)
{
	int i;

	for (i = 0; i < size; i++)
		printf("%d ", set[i]);
	return;
}
int setUnion(int set1[], int size1, int set2[], int size2, int setResult[])
{
	int i;

	for (i = 0; i < size1; i++)
		setResult[i] = set1[i];
		
	for (i = 0; i < size2; i++)
		if (hasElement(set1, size1, set2[i]) == DO_NOT_HAVE_ELEMENT)
			setResult[size1++] = set2[i];

	return size1;       
}
int setIntersecton(int set1[], int size1, int set2[], int size2, int setResult[])
{
	 int i;
	 int count = 0;

	 for (i = 0; i < size2; i++)
		 if (hasElement(set1, size1, set2[i]) == HAVE_ELEMENT)
			 setResult[count++] = set2[i];
	 return count;
}
int setComplements(int set1[], int size1, int set2[], int size2, int setResult[])
{
	int i;
	int count = 0;

	for (i = 0; i < size2; i++)
		 if (hasElement(set1, size1, set2[i]) == DO_NOT_HAVE_ELEMENT)
			 setResult[count++] = set2[i];
	 return count;
	
}