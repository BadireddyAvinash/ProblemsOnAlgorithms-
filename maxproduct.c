//Find the maximum element in the array such that it should be equal to product of other two elements in the array
#include <stdio.h>
int maxElement(int size,int arr[])
{
	int i,j,temp,k,product;
	for(i=0;i<size;i++)
	{
		for(j=0;j<size-i-1;j++)
		{
			if(arr[j]<arr[j+1])
			{
				temp=arr[j];
				arr[j]=arr[j+1];
				arr[j+1]=temp;
			}
		}
	}
	for(k=0;k<size;k++)
	{
		for(i=k+1;i<size-1;i++)
		{
			for(j=i+1;j<size;j++)
			{
				product=arr[i]*arr[j];
				if(arr[size-2]==0 && arr[size-1]==0)
				{
					return 0;
				}
				if(arr[k]==product)
				{
					return arr[k];
				}
			}
		}
	}
	return -1;
}
void main()
{
	int array1[]={0,0,0};
	int max1=maxElement(3,array1);
	int array2[]={3,7,1,2,4};
	int max2=maxElement(5,array2);
	int array3[]={9,13,17,1,9};
	int max3=maxElement(5,array3);
	int array4[]={7,1,2,0,0};
	int max4=maxElement(5,array4);
	int array5[]={13,12,7,2,4,3,0};
	int max5=maxElement(7,array5);
	printf("max1=%d max2=%d max3=%d max4=%d max5=%d",max1,max2,max3,max4,max5);
}