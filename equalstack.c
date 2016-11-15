/*You have three stacks of cylinders where each cylinder has the same diameter, but they may vary in height. You can change the height of a stack by removing and discarding its topmost cylinder any number of times.
Find the maximum possible height of the stacks such that all of the stacks are exactly the same height. This means you must remove zero or more cylinders from the top of zero or more of the three stacks until they're all the same height, then print the height. The removals must be performed in such a way as to maximize the height.
Note: An empty stack is still a stack
*/
#include <stdio.h>
int stack1[100];
int stack2[100];
int stack3[100];
int sum1 = 0,sum2 = 0,sum3 = 0;
int top1=-1, top2=-1, top3=-1;
void pushIntoStack1(int x)
{
	top1 = top1+1;
	stack1[top1] = x;
	sum1 = sum1 + x;

}
void pushIntoStack2(int x)
{
	top2 = top2+1;
	stack2[top2] = x;
	sum2 = sum2 + x;
}
void pushIntoStack3(int x)
{
	top3 = top3+1;
	stack3[top3] = x;
	sum3 = sum3 + x;
}
void maxPossibleHeight()
{
	while(top1>=0 && top2>=0 && top3>=0)
	{
		if(sum1 == sum2 && sum2 == sum3)
		{
			printf("The Max sum in all three stacks is %d", sum1);
			break;
		}
		if(sum1>sum2 && sum1>sum3)
		{
			sum1 = sum1 - stack1[top1];
			top1 = top1 - 1;
		}
		if(sum2>sum1 && sum2>sum3)
		{
			sum2 = sum2 - stack2[top2];
			top2 =top2 - 1;
		}
		if(sum3>sum1 && sum3>sum2)
		{
			sum3 = sum3 - stack3[top3];
			top3 = top3 - 1;
		}
		if(sum1 == sum2 && sum1 > sum3)
		{
			sum1 = sum1 - stack1[top1];
			sum2 = sum2 - stack2[top2];
			top1 = top1 - 1;
			top2 = top2 - 1;
		}
		if(sum2 == sum3 && sum2 > sum1)
		{
			sum2 = sum2 - stack2[top2];
			sum3 = sum3 - stack3[top3];
			top2 = top2 - 1;
			top3 = top3 - 1;
		}
		if(sum1 == sum3 && sum1 > sum2)
		{
			sum1 = sum1 - stack1[top1];
			sum3 = sum3 - stack3[top3];
			top1 = top1 - 1;
			top3 = top3 - 1;
		}
		if(top1==-1 || top2 ==-1 || top3== -1)
		{
			printf("No Max");
		}
	}
}
void main()
{
	pushIntoStack1(1);
	pushIntoStack1(1);
	pushIntoStack1(1);
	pushIntoStack1(2);
	pushIntoStack1(3);
	pushIntoStack2(2);
	pushIntoStack2(3);
	pushIntoStack3(4);
	pushIntoStack3(1);
	pushIntoStack3(4);
	pushIntoStack3(1);
	pushIntoStack3(1);
	maxPossibleHeight();
}