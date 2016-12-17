//print the following staircase
/* #
  ##
 ###
####*/
#include <stdio.h>
void stairCase(int n)
{
	int i, j,temp = n-1;
	for(i=0;i<n;i++)
	{
		for(j=0;j<n;j++)
		{
			if(j >= temp)
			{
				printf("#");
			}
			else
			{
				printf(" ");
			}
			
		}
		temp = temp - 1;
		printf("\n");
	}
}
void main()
{
	int n;
	printf("Enter number of rows and colums: ");
	scanf("%d",&n);
	stairCase(n);
}