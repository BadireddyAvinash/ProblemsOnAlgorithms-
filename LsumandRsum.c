//Program to find an element in an array such that its right  and left elements sum are equal
#include <stdio.h>
int getElementLeftAndRightSum(int integerarray[],int size)
{
	int i=0,j=size-1,right_sum,left_sum,counter;
	left_sum = integerarray[i];
	right_sum = integerarray[j];
	for(counter=0;counter<size;counter++)
	{
		printf("%d",integerarray[counter]);
	}
	while(i!=j && i<j)
	{
		if(left_sum == right_sum)
		{
			i = i+1;
			j = j-1;
			if(i!=j)
			{
				left_sum = left_sum + integerarray[i];
				right_sum = right_sum + integerarray[j];
			}

		}
		if(left_sum > right_sum)
		{
			j = j-1;
			right_sum = right_sum + integerarray[j];
		}
		if(left_sum < right_sum)
		{
			i = i+1;
			left_sum = left_sum + integerarray[i];
		}
	}
	//return the element where left and right sum are equal else print No such element found
	if(left_sum == right_sum)
	{
		return integerarray[i];
	}
	else
	{
		return 0;
	}
}
void main()
{
	int result1,result2,result3,result4;
	int testcase1[]={2,2,2},testcase2[]={2,4,6,8},testcase3[]={2},testcase4[]={1,2,3,2,1};
	printf("Program to find an element in an array such that its right  and left elements sum are equal if not return zero\n");
	result1 = getElementLeftAndRightSum(testcase1,3);
	printf("----->%d\n",result1);
	result2 = leftAndRightSum(testcase2,4);
	printf("----->%d\n",result2);
	result3 = leftAndRightSum(testcase3,1);
	printf("----->%d\n",result3);
	result4 = leftAndRightSum(testcase4,5);
	printf("----->%d\n",result4);
}