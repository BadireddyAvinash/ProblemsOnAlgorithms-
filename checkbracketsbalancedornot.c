//Program to find whether the brackets are balanced or not
#include <stdio.h>
# define size 100
char stack[size];
void CheckBracketsBalancedOrNot(char array[],int n)
{
	int top = -1;
	int i = 0,k;
	while(array[i]!='\0')
	{
		if(array[i] == '(' || array[i] == '[' || array[i] == '{')
		{
			top = top+1;
			stack[top] = array[i];
		}
		else
		{
			if(top==-1 && array[i] == ')' || top == -1 && array[i] == ']' || top == -1 && array[i] == '}')
			{
				//printf("NO\n");
				top=-2;
				break;
			}
			if(top!=-1 && array[i] == ')')
			{
				if(stack[top] == '(')
				{
					top = top-1;	
				}
			}
			if(top!=-1 && array[i] == ']')
			{
				if(stack[top] == '[')
				{
					top = top-1;
				}	
			}
			if(top!=-1 && array[i] == '}')
			{
				if(stack[top] == '{')
				{
					top = top-1;
				}
			}
		}
		i++;
	}
	if(top == -1)
	{
		printf("YES\n");
	}
	else if(top==-2)
	{
		printf("NO\n");
	}
	else
	{
		printf("NO\n");
	}
}
void main()
{
	char array[]="{[()]}";
	CheckBracketsBalancedOrNot(array,6);
	char array1[]="{[(])}";
	CheckBracketsBalancedOrNot(array1,6);
	char array2[]="{{[[(())]]}}";
	CheckBracketsBalancedOrNot(array2,12);
	char array3[]="}";
	CheckBracketsBalancedOrNot(array3,1);
}