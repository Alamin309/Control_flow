#include <stdio.h>
#include <math.h>

int main()
{
    int a,b,input,j;

    for(input=a;input<=b;input++)
    {
        if(input)
            printf("%d",&input);

    }

    return 0;
}


    int isArmstone(int number1){

    int number2,int number3,int reminder,;
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

        return number3;

    }









