#include <stdio.h>

int main()
{
    int p;
    printf("Input the number :");
    scanf("%d",&p);
    if(p==2)
    {
        printf("It is a prime number");
    }
    else if(p%2==0)
    {
        printf("It's not a prime number ");

    }
    else if (p%2!=0)
    {
        printf("It's a prime number");
    }
    else
    {
        printf("Error");
    }

    return 0;
}
