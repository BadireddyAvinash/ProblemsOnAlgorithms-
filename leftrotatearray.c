//A left rotation operation on an array of size N shifts each of the array's elements 1 unit to the left. For example, if 2 left rotations are performed on array [1,2,3,4,5], then the array would become [3,4,5,1,2].
//Given an array of n integers and a number, d, perform  d left rotations on the array. Then print the updated array as a single line of space-separated integers.
#include <stdio.h>
#include <string.h>
#include <math.h>
#include <stdlib.h>
void leftRotateTheArray(int integerarray[],int size,int noofleftshifts)
{
	int i;
    int noofrotations=noofleftshifts%size;
    for(i=noofrotations;i<size;i++)
    {
        printf("%d ",integerarray[i]);    
    }
    for(i=0;i<noofrotations;i++)
    {
        printf("%d ",integerarray[i]);    
    }
}
int main()
{
    int array1[]={1,2,3,4,5};
    leftRotateTheArray(array1,5,4);
    printf("\n");
    int array2[]={7,2,4,5,9,10};
    leftRotateTheArray(array2,6,4);
    printf("\n");
    int array3[]={10,11,34,77,25,66,90};
    leftRotateTheArray(array3,7,10);
}