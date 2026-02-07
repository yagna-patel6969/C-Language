#include<stdio.h>

int factorial(int x){
    int fact=1;
    for(int i=0 ; i<=x ; i++){
        fact=fact*i;
    }
}

int main(){

    int n;
    printf("Enter a choosen number:");
    scanf("%d",&n);

    int r;
    printf("Enter a total number:");
    scanf("%d",&r);

    int ncr = factorial(n)/(factorial(r)*factorial(n-r));
    printf("For given ncr is=%d",ncr);
    return 0;
}