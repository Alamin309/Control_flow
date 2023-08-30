
#include <stdio.h>

int main()
{
    int year;
    printf("Input the year for checking leap year or not : ");
    scanf("%d",&year);

    if(year%400 == 0)
    {
        printf("This year is leap year ");
    }
    else if(year%4 == 0 && year%100 != 0)
    {
        printf("This year is leap year ");

    }
    else
        printf("This is not a leap year");


    return 0;
}
