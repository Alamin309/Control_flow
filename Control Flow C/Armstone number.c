#include <stdio.h>
#include <math.h>

int main()
{
    int number1,number2,number3,reminder,rem;
    int count=0;
    int out=0;

    scanf("%d",&number1);
    number2=number1;
    number3 = number1;

    while(number1!=0)
    {
        number1=number1/10;
        count++;
    }

    while(number2!=0)
    {
        reminder = number2%10;
        out = pow(reminder,count)+out;
        number2 = number2/10;

    }

    if(out==number3)

        printf("Number is an armstone number");

    else
        printf("Number is not an armstone number");








    return 0;
}
