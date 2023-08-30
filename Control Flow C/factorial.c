#include<stdio.h>
#include<math.h>
main(){
    int f;
    printf("Input Number of Row: ");
    scanf("%d",&f);

    printf("%d",factorial(f));
    return 0;
}

int factorial(int f){

    int fact=1;
    if(f==0){
        return 1;
    }
    for(int i=1;i<=f;i++){
        fact=fact*i;
    }
    return fact;
}
