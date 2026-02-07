#include<stdio.h>
int factorial(int x){  //step-1=x=n  step-2=x=r  step-3=x=n-r 
    int fact=1;
    for(int i=2 ; i<=x ; i++){
        fact=fact*i;
    }
    return fact;
}
int main() {

    int n;
    printf("Enter a n:");
    scanf("%d",&n);

    int r;
    printf("Enter a r:");
    scanf("%d",&r);

    int ncr=factorial(n)/(factorial(r)*factorial(n-r));
    printf("Combinaton is:%d",ncr);
    return 0;
}