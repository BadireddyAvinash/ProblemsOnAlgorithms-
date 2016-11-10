#include <stdio.h>
void generateSubArrays(int array[],int size)
{
	int i,j,k,sum,maxsum=0;
	for(i=0;i<size;i++)
	{
		for(j=i+1;j<size;j++)
		{
			sum=0;
			for(k=i;k<=j;k++)
			{
				sum=sum+array[k];
			}
			if(maxsum<sum)
			{
				maxsum=sum;
			}
		}
	}
	printf("maxsum=%d",maxsum);
}
void main()
{
	int array1[]={1,2,3,-5,6};
	int array2[]={0,1,2,3,5,7};
	int array3[]={-1,-2,-3,3,7,-3,7};
	int array4[]={-3,6,-9,7,-2};
	generateSubArrays(array1,5);
	printf("\n");
	generateSubArrays(array2,6);
	printf("\n");
	generateSubArrays(array3,7);
	printf("\n");
	generateSubArrays(array4,5);
}