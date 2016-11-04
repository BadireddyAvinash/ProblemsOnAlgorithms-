//find two sets contains two elements each whose sum is equal
//Eg:(3+7)=(9+1)
//(3+7)=(2+8)
#include <stdio.h>
void findPairsOfSameSum(int integerarray[],int size)
{
	int i,j,k,l;
	for(i=0;i<size;i++)
	{
		for(j=i+1;j<size;j++)
		{
			for(k=j+1;k<size;k++)
			{
				for(l=k+1;l<size;l++)
				{
					if(integerarray[i]+integerarray[j]==integerarray[k]+integerarray[l])
					{
						printf("{(%d+%d)=(%d+%d)}\n",integerarray[i],integerarray[j],integerarray[k],integerarray[l]);
					}
				}
			}
		}
	}
}
void main()
{
	int firsttestarray[]={3,4,7,1,2,9,8};
	findPairsOfSameSum(firsttestarray,7);
	int secondtestarray[]={60,30,7,90,1,9,8};
	findPairsOfSameSum(secondtestarray,7);
}