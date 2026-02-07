#include<stdio.h>
int main(){

    int a;
    printf("Enter a number :");
    scanf("%d",&a);

    if(a<=100 && a>999){
        printf("Given number has 3 digit");
    }
    else
    {
         printf("Given number has less or more than 3 digit");
    }
    
    return 0;
}