/*Program to print all sub Arrays in an Array with elements in the increasing order.
input:{1,2,3,5,4,6}
output:1,2  1,2,3  1,2,3,5  2,3  2,3,5  3,5  4,6*/
#include <stdio.h>
void PrintIncreasingOrderSubArray(int array1[],int size)
{
	int counter1=0,counter2=1,count=0;
	while(counter1<size-1 && counter2<size)
	{
		if(array1[counter1]<array1[counter2])
		{
			counter1++;
			counter2++;
			count++;
		}
		else
		{
			counter1++;
			counter2++;
		}
	}
	if(count==size-1)
	{
		for(counter1=0;counter1<size;counter1++)
		{
			printf("%d ",array1[counter1]);
		}
	}
}
void generateSubArrays(int array[],int size)
{
	int i,j,k,l;
	int array1[100];
	for(i=0;i<size;i++)
	{
		for(j=i+1;j<size;j++)
		{
			l=0;
			for(k=i;k<=j;k++)
			{
				array1[l]=array[k];
				l++;
			}
			PrintIncreasingOrderSubArray(array1,l);
			printf("  ");
		}
	}
}
void main()
{
	int array[]={1,2,3,4,5,6,7};
	int counter;
	for(counter=0;counter<7;counter++)
	{
		printf("%d ",array[counter]);
	}
	printf("------->");
	generateSubArrays(array,7);
	printf("\n");
	printf("\n");
	int array1[]={1,2,3,5,4,6};
	for(counter=0;counter<6;counter++)
	{
		printf("%d ",array1[counter]);
	}
	printf("------->");
	generateSubArrays(array1,6);
	int array2[]={2,3,6,1,7,10};
	printf("\n");
	printf("\n");
	for(counter=0;counter<6;counter++)
	{
		printf("%d ",array2[counter]);
	}
	printf("------->");
	generateSubArrays(array2,6);
}