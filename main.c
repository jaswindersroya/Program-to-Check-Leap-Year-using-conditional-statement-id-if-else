//Program to Check Leap Year.
#include <stdio.h>

int main()
{
    //declare variables
    int year;
    
    //user input
    printf("enter the year:");
    scanf("%d",&year);
    
    //conditional statment
    if(year%4==0 && year%100 ==0)
    printf("year %d is a leap year",year);
    else
    printf("year %d is not a leap year",year);
    printf("\nLets Check on another one!hurry up");
}
