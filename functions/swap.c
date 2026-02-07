#include<stdio.h>
// we can not do this without pass by refrence
// code will not execute
int swap ( num1, num2){
    // int temp;
    // temp=num1;
    // num1=num2;
    // num2=temp;

    num1=num1+num2;
    num2=num1-num2;
    num1=num1-num2;

    return num1,num2;
}

int main(){

    int num1;
    printf("Enter a 1st number:");
    scanf("%d",&num1);

    int num2;
    printf("Enter a 2nd number:");
    scanf("%d",&num2);

    printf("New first number is :%d",swap(num1));
    printf("New second number is :%d",swap(num2));
    return 0;
}