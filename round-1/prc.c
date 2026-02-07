//Given an integer num, return the number of steps to reduce it tozero.
// In one step, if the current number is even, you have to divide it by 2, otherwise, you have to subtract 1 from it.
//in-->8out-->4

#include<stdio.h>
int main(){

    int num;
    printf("Enter a number");
    scanf("%d",&num);

    int count=0;

    if (num==0)
    {
        printf("Enter a valid number");
    }
    else if (num % 2 == 0)
    {
        while (num%2==0)
        {
            count++;
        }
        printf("Number of steps to become zero is %d",count);

    }
    
    else if (num % 2 != 0)
    {
        
        num=num-1;
        while (num%2==0)
        {
            count++;
        }
        printf("Number of steps to become zero is %d",count);
    }
    
    
    return 0;
}