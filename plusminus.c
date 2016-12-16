//Given an array of integers, calculate which fraction of its elements are positive, which fraction of its elements are negative, and which fraction of its elements are zeroes, respectively. Print the decimal value of each fraction on a new line.
#include <stdio.h>
void plusMinus(int array[],int size)
{
	int i, count1 = 0, count2 = 0, count3 = 0;
	for(i=0;i<size;i++)
	{
		if(array[i] > 0)
		{
			count1++;
		}
		else if(array[i] < 0)
		{
			count2++;
		}
		else
		{
			count3++;
		}
	}
	printf("%f \n%f \n%f\n",(float)count1/size, (float)count2/size ,(float)count3/size);
	printf("\n");
}
void main()
{
	int array[] = {-4,3,-9,0,4,1};
	int array1[] = {-1,6,7,-8,0,0,2,1,-10};
	int array2[] = {-2};
	plusMinus(array,6);
	plusMinus(array1,9);
	plusMinus(array2,1);
}