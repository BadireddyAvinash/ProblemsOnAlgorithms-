//Given a square matrix of size N*N,calculate the absolute difference between the sums of its diagonals.
#include <stdio.h>
void main()
{
	int array[100][100];
	int rowsize,columnsize,i,j,sum1=0,sum2=0;
	printf("Enter number of rows: ");
	scanf("%d",&rowsize);
	printf("Enter number of colums: ");
	scanf("%d",&columnsize);
	for(i=0;i<rowsize;i++)
	{
		for(j=0;j<columnsize;j++)
		{
			printf("Enter element (%d %d)",i,j);
			scanf("%d",&array[i][j]);
		}
	}
	for(i=0;i<rowsize;i++)
	{
		for(j=0;j<columnsize;j++)
		{
			printf("%d ",array[i][j]);
		}
	}
	i=0,j=0;
	while(i<rowsize && j< columnsize)
	{
		sum1 = sum1 + array[i][j];
		i++;
		j++;
	}
	i=0;j=columnsize-1;
	while(i<columnsize && j>=0)
	{
		sum2 = sum2 + array[i][j];
		i++;
		j--;
	}
	printf("sum1 = %d and sum2 = %d",sum1,sum2);
	printf("The difference between two diagonlas is %d",abs(sum1-sum2));
}