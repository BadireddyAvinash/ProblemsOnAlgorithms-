/*Your local library needs your help! Given the expected and actual return dates for a library book, create a program that calculates the fine (if any). The fee structure is as follows:
1)If the book is returned on or before the expected return date, no fine will be charged (i.e.: fine=0).
2)If the book is returned after the expected return day but still within the same calendar month and year as the expected return date,fine=15Hackos*(The number of days late).
3)If the book is returned after the expected return month but still within the same calendar year as the expected return date, the fine=500Hackos*(The total numbers of months late).
4)If the book is returned after the calendar year in which it was expected, there is a fixed fine of 10000Hackos.
Input:-
The first line contains 3 space-separated integers denoting the respective ,day ,month and year on which the book was actually returned.
The second line contains 3 space-separated integers denoting the respective ,day ,month and year on which the book was expected to be returned (due date). */
#include <stdio.h>
#include <string.h>
#include <math.h>
#include <stdlib.h>
void calculateLibraryFine(int retdate,int retmon,int retyear,int expdate,int expmon,int expyear)
{
	int fine=0;
	if(retyear<expyear||retyear==expyear&&retmon<=expmon&&retdate<expdate)
	{
		printf("%d",fine);
	}
	else if(retyear==expyear && retmon==expmon && retdate>expdate)
	{
		fine=(retdate-expdate)*15;
		printf("%d",fine);
	}
	else if(retyear==expyear && retmon>expmon)
	{
		fine=(retmon-expmon)*500;
		printf("%d",fine);
	}
	else if(retyear>expyear)
	{
		fine=10000;
		printf("%d",fine);
	}
}
int main() {

    int expyear,expmon,expdate,retyear,retmon,retdate;
    scanf("%d %d %d\n",&retdate,&retmon,&retyear);
    scanf("%d %d %d",&expdate,&expmon,&expyear);
    calculateLibraryFine(retdate,retmon,retyear,expdate,expmon,expyear);
}
