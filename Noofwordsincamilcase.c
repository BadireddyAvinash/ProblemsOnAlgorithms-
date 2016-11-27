//Alice wrote a sequence of words in CamelCase as a string of letters, S, having the following properties:
//a)It is a concatenation of one or more words consisting of English letters.
//b)All letters in the first word are lowercase.
//c)For each of the subsequent words, the first letter is uppercase and rest of the letters are lowercase.
//Given S, print the number of words in S on a new line.
#include <stdio.h>
#include <string.h>
void getNumberOfWordsInCamelCase(char array[])
{
	printf("%s----->",array);
	int count = 1,i;
	int size = strlen(array);
	for(i=0;i<size;i++)
	{
		if(isupper(array[i]))
		{
			count++;
		}
	}
	printf("%d\n", count);
}
void main()
{
	getNumberOfWordsInCamelCase("saveChangesInTheEditor");
	getNumberOfWordsInCamelCase("whatIsYourName");
	getNumberOfWordsInCamelCase("is");
	getNumberOfWordsInCamelCase("isItFine");
}