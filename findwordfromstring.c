//Program to find a whether the given word is there in the string or not
#include <stdio.h>
#include <string.h>
void findWord(char para[],char word[])
{
	int i=0,j=0,count=0;
	while(para[i]!='\0' && word[j]!='\0')
	{
		if(para[i] == word[j])
		{
			j++;
		}
		else
		{
			j=0;
		}
		i++;
	}
	if(j == strlen(word))
	{
		printf("The word is found\n");
	}
	else
	{
		printf("The word is not found\n");
	}
}
void main()
{
	findWord("my name is avinash","name");
	findWord("today is the wonderful day","the");
	findWord("my friends and me went to moviee","to");
	findWord("i went to park today","have");
}