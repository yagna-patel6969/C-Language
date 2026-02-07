#include<stdio.h>
int main(){

    int a;
    printf("enter first number :");
    scanf("%d",&a);

    int b;
    printf("enter second number :");
    scanf("%d",&b);

    int c;
    printf("enter thied number :");
    scanf("%d",&c);

    if(a>c && a>b){
        printf("a is larger number");
    }

    else if (b>a && b>c){
        printf("b is larger number");
    }

    else if(c>a && c>b){
        printf("c is larger number");
    }
    return 0;
}