//Julius Caesar protected his confidential information by encrypting it in a cipher. Caesar's cipher rotated every letter in a string by a fixed number,K , making it unreadable by his enemies. Given a string,S , and a number,K , encrypt S and print the resulting string.
//Note: The cipher only encrypts letters; symbols, such as -, remain unencrypted.
#include <math.h>
#include <stdio.h>
#include <string.h>
#include <stdlib.h>
#include <assert.h>
#include <limits.h>
#include <stdbool.h>
#include <ctype.h>
void encryptString(char array[],int size,int k)
{
	int counter,sum,l,t,array1[100];
	for(counter=0;counter<size;counter++)
	{
		sum=array[counter]+k;
		if(islower(array[counter]))
		{
			l=sum-'a';
			t=(l%26)+'a';
			printf("%c",t);
		}
		else if(isupper(array[counter]))
		{
			l=sum-'A';
			t=(l%26)+'A';
			printf("%c",t);
		}
		else
		{
			printf("%c",array[counter]);
		}
	}
}
int main()
{
    encryptString("middle-Outz",11,2);
    printf("\n");
    encryptString("avinash-time",12,5s);

}
