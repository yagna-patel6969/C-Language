#include<stdio.h>

int factorial(int x){
    int fact=1;
    for(int i=2 ; i<=x ; i++){
        fact=fact*i;
    }
    return fact;
}

int main(){

    int n;
    printf("Enter a choosen number:");
    scanf("%d",&n);

    int r;
    printf("Enter a total number:");
    scanf("%d",&r);

    int pcr = factorial(n)/factorial(n-r);
    printf("For given pcr is=%d",pcr);
    return 0;
}