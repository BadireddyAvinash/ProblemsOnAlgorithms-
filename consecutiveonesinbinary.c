/*Given a base-10 integer,n, convert it to binary (base-2). Then find and print the base-10 integer denoting the maximum number of consecutive 1's in n's binary representation.
constraints:-
1<=n<=10pow(6)*/
#include <math.h>
#include <stdio.h>
#include <string.h>
#include <stdlib.h>
#include <assert.h>
#include <limits.h>
#include <stdbool.h>
void noOfConsecutiveOnes(int decimalnumber)
{
	int quotient,binary[100],count=0,size,counter,count2=0,max=0;
	quotient=decimalnumber;
	while(quotient!=0)
	{
		binary[count]=quotient%2;
		quotient=quotient/2;
		count++;
	}
	size=count;
	for(counter=size-1;counter>=0;)
	{
		if(binary[counter]==1)
		{
			count2++;
		}
		else
		{
			if(max<=count2)
			{
				max=count2;
			}
            count2=0;
		}
		counter--;
	}
	if(max<count2)
	{
		max=count2;
	}
	printf("%d\n",max);
}
int main()
{ 
    noOfConsecutiveOnes(2);
    noOfConsecutiveOnes(5);
    noOfConsecutiveOnes(7);
    noOfConsecutiveOnes(14);
    noOfConsecutiveOnes(15);
    noOfConsecutiveOnes(0);

}
