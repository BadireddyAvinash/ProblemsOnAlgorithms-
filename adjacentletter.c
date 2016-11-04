//program to delete adjacent characters which are same and return remaining string
//Eg:abbc---->ac
//aabb--->no letters
//a--->a
#include <stdio.h>
#include <string.h>
void DeletingAdjacentletters(char array1[],int size)
{
	printf("%s --> ",array1);
	int i=0,j=i+1,k=0,counter1;
	char array2[10];
	while(i<size || j<size)
	{
		if(array1[i]==array1[j])
		{
			i=i+2;
			j=j+2;
		}
		else
		{
			array2[k]=array1[i];
			i=i+1;
			j=j+1;
			k=k+1;
		}
	}
	array2[k]='\0';
	printf(" %s\n", array2);
}
void main()
{
	DeletingAdjacentletters("abbc",4);
	DeletingAdjacentletters("aabb",4);
	DeletingAdjacentletters("aabcc",5);
	DeletingAdjacentletters("a",1);
}
