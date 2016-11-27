//Program to reduced the given string.Steve has a string,S , consisting of N lowercase English alphabetic letters. In one operation, he can delete any pair of adjacent letters with same value. For example, string "aabcc" would become either "aab" or "bcc" after  operation.Steve wants to reduce  as much as possible.
#include <stdio.h>
void printSuperReducedString(char array[],int size)
{
	int stack[100],i,top = -1;
	for(i=0;i<size;i++)
	{
		if(top == -1 || stack[top] != array[i])
		{
			top = top + 1;
			stack[top] = array[i];
		}
		else 
		{
			top = top - 1;
		}
	}
	if(top == -1)
	{
		printf("Empty String\n");
	}
	else
	{
		for(i=0;i<=top;i++)
		{
			printf("%c ",stack[i]);
		}
		printf("\n");
	}
}
void main()
{
	printSuperReducedString("aaabccddd",9);
	printSuperReducedString("a",1);
	printSuperReducedString("abb",3);
	printSuperReducedString("bbcc",4);
	printSuperReducedString("baab",4);
}