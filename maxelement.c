//Find the maximum element in the array such that it should be equal to sum of other two elements in the array
#include <stdio.h>
int maxElement(int size,int arr[])
{
	int i,j,temp,sum,result1,k;
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
		//printf("%d\n",arr[k]);
		for(i=k+1;i<size-1;i++)
		{
			for(j=i+1;j<size;j++)
			{
				//printf("(%d %d) ",arr[i],arr[j]);
				sum=arr[i]+arr[j];
				if(arr[k]==sum)
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
	int array[]={3,1,2,1};
	int max=maxElement(4,array);
	int array1[]={7,1,8,3};
	int max1=maxElement(4,array1);
	int array2[]={0,0,0};
	int max2=maxElement(3,array2);
	int array3[]={7,2,8,1,9,2,3,4};
	int max3=maxElement(8,array3);
	int array4[]={6,1,4,9,5,2,7,0};
	int max4=maxElement(8,array4);
	int array5[]={2,6,1};
	int max5=maxElement(3,array5);
	int array6[]={7,1,4,0,1,4};
	int max6=maxElement(6,array6);
	int array7[]={9,2,5,1,7,6,3,2};
	int max7=maxElement(8,array7);
	printf("%d %d %d %d %d %d %d %d",max,max1,max2,max3,max4,max5,max6,max7);
}
	