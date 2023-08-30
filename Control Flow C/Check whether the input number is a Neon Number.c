#include<stdio.h>
main(){
    int square,num,n,sum,digit;

    printf("Enter the number:");
    scanf("%d",&num);

    square = num * num;
    n = square;
    digit;
    sum = 0;

    while (n != 0) {
        digit = n % 10;
        sum = sum + digit;
        n = n / 10;
    }
   if(sum==num)
    {
    printf("\nThe number %d is a neon number.\n",num);}
    else if (sum!=num)
    {
        printf("\nThe number %d is not a neon number.\n",num);
    }
    return 0;
}

