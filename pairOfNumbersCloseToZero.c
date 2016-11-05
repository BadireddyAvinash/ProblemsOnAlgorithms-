//Program to print pair of numbers whose sum is closest to zero.
//Time complexity O(n^2)
#include <stdio.h>
void printPairOfNumbersCloseToZero(int array[],int size)
{
	int i,j,sum,sum1,element1,element2;
	int min_sum=array[0]+array[1];
	for(i=0;i<size-1;i++)
	{
		for(j=i+1;j<size;j++)
		{
			sum=array[i]+array[j];
			if(abs(min_sum)>=abs(sum))
			{
				element1 = array[i];
				element2 = array[j];
				min_sum = sum;
			}
		}
	}
	printf("The pair of numbers whose sum is closest to zero are (%d,%d) ",element1,element2);
}
void main()
{
	int array1[] = {-80,70,10,85};
	printPairOfNumbersCloseToZero(array1,4);
	printf("\n");
	int array2[] = {-2,1,5,-4,6};
	printPairOfNumbersCloseToZero(array2,5);
	printf("\n");
	int array3[] = {7,4,2,-8,11};
	printPairOfNumbersCloseToZero(array3,5);
	printf("\n");
	int array4[] = {0,4,11,-12};
	printPairOfNumbersCloseToZero(array4,4);

}