#include<stdio.h>
main(){
    int number;
    printf("Enter the number: ");
    scanf("%d",&number);
    if (number%2==0)
    {
        printf("\nThe number is even.\n");
    }
    else
    {
            printf("The number is odd.\n");
    }
    return 0;

}
