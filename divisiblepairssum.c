//You are given an array of N integers a0,a1,a2,a3,....,an-1 ,and a positive integer K.Find and print the number of (ai,aj)pairs where i<j and ai+aj is evenly divisible by K.
#include <math.h>
#include <stdio.h>
#include <string.h>
#include <stdlib.h>
#include <assert.h>
#include <limits.h>
#include <stdbool.h>
void getDivisiblePairsCount(int array[],int n,int k)
{
    int i,sum,even,j,count=0;
    for(i=0;i<n;i++)
    {
        for(j=i+1;j<n;j++)
        {
           if(i<j)
           {
           		sum=array[i]+array[j];
           		even=sum%k;
           		if(even==0)
           		{
           			count=count+1;
           		}
           } 
        }
    }
    printf("%d",count);
}
int main(){
    int n; 
    int k,i; 
    scanf("%d %d",&n,&k);
    int a[100];
    for(i = 0; i < n; i++){
       scanf("%d",&a[i]);
    }
    getDivisiblePairsCount(a,n,k);
}