#include<stdio.h>
int main(){

// num odd,even 
    int num;
    printf("Enter a number:");
    scanf("%d",&num);  //44

    if (num%2==0)
    {
        printf("Given number %d is even",num);
    }
    
    else{
        printf("Given number %d is odd",num);
    }

    return 0;
}