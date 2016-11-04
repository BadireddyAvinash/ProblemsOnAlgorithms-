/*Given set S={0,1,2,....,N}.Find two integers A and B(where A<B),from set S such that the value of A&B is the Maximum possible and also less than the given integer K.In this case & represent bitwiseresult AND operator.
inputformat:-first line consists an integer T,the number of test cases.
Each of the T subsequent lines defines a test case as 2 space-separated integers, N and ,K respectively.
Constraints:-
1<=T<=10pow(3)
2<=N<=10pow(3)
2<=K<=N*/
#include <math.h>
#include <stdio.h>
#include <string.h>
#include <stdlib.h>
#include <assert.h>
#include <limits.h>
#include <stdbool.h>

int main(){
    int t,i,j,bitwiseresult,a;
    printf("Enter number of test cases:"); 
    scanf("%d",&t);
    for(a = 0; a < t; a++)
    {
        if(t<1||t>1000)//1<=T<=10pow(3)
        {
            exit(0);    
        }
        int n,maxbitwiseresult=0; 
        int k;
        printf("Enter the N and K values:"); 
        scanf("%d %d",&n,&k);
        if(n<2||n>1000||k<2||k>n)//2<=N<=10pow(3) and 2<=k<=N
        {
            exit(0);    
        }
        for(i=1;i<n-1;i++)
        {
            for(j=i+1;j<=n;j++)
            {
                bitwiseresult=i&j;
                if(bitwiseresult<k && i<j)
                {
                    if(maxbitwiseresult<=bitwiseresult)
                    {
                        maxbitwiseresult=bitwiseresult;
                    }
                }
            }
        }
        printf("The maximum bitwise result of A&B and less than %d is:",k);
	    printf("%d\n",maxbitwiseresult);
    }
    return 0;
}
