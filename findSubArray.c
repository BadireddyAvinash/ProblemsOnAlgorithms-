//Program to find the sub array if that is sorted the whole array will be sorted
#include <stdio.h>
void findSubArray(int array[],int size)
{
	int i,j,k,l,lowerindex,upperindex,counter;
	i=0,j=i+1,k=size-2,l=size-1;
	for(counter=0;counter<size;counter++)
	{
		printf("%d ", array[counter]);
	}
	printf("----->");
	while(array[i]<array[j] && i<size-1 && j<size)
	{
		i++;
		j++;
	}
	while(array[k]<array[l] && k>=0 && l>0)
	{
		k--;
		l--;
	}
	if(i == size-1 && j == size)
	{
		printf("The Array is Already sorted");
	}
	else
	{
		lowerindex = i;
		upperindex = l;
		int m,newlower,newupper;
		int max = array[i];
		for(m=i+1;m<=l;m++)
		{
			if(max<array[m])
			{
				max = array[m];
			}
		}
		//printf("max=%d\n", max);
		int n;
		int min = array[i];
		for(n=i+1;n<=l;n++)
		{
			if(min>array[n])
			{
				min = array[n];
			}
		}
		//printf("min=%d", min);
		for(i=0;i<lowerindex;i++)
		{
			if(array[i]>min)
			{
				newlower=i;
			}
			else
			{
				newlower=lowerindex;
			}
		}
		for(j=size-1;j>upperindex;j--)
		{
			if(array[j]<max)
			{
				newupper=j;
			}
			else
			{
				newupper=upperindex;
			}
		}
		printf("%d %d",newlower,newupper);
	}
}
void main()
{
	int array1[] = {1, 2, 3, 11, 9, 6, 3, 15};
	int counter;
	findSubArray(array1,8);
	printf("\n");
	int array2[] = {1, 2, 3, 4, 5, 6, 7};
	findSubArray(array2,7);
	printf("\n");
	int array3[]={10, 12, 20, 30, 25, 40, 32, 31, 35, 50, 60};
	findSubArray(array3,11);
	printf("\n");
	int array4[]={0, 1, 15, 25, 6, 7, 30, 40, 50};
	findSubArray(array4,9);
}