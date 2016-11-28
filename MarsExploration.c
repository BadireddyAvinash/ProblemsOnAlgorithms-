//Letters in some of the SOS messages are altered by cosmic radiation during transmission. Given the signal received by Earth as a string,S , determine how many letters of Sami's SOS have been changed by radiation.
//Example: SOSSPSSQSSOR
//ans:3
#include <stdio.h>
void noOfChangedCharacters(char message[], int size)
{
	int i=0,j=1,k=2,count = 0;
	printf("%s----->", message);
	while(k<size && j<size-1 && i<size-2)
	{
		if('S' != message[i])
		{
			count++;
		}
		if('O' != message[j])
		{
			count++;
		}
		if('S' != message[k])
		{
			count++;
		}
		i = k + 1;
		j = i + 1;
		k = j + 1;
	}
	if(count == 0)
	{
		printf("Message has not changed\n");
	}
	else
	{
		printf("number of bits changed in the message are %d\n",count);
	}
}
void main()
{
	noOfChangedCharacters("SOSSPSSQSSOR",12);
	noOfChangedCharacters("SOSSOT",6);
	noOfChangedCharacters("SOSSOSSOSSOS",12);
	noOfChangedCharacters("SOS",3);
}