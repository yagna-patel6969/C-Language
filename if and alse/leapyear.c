#include<stdio.h>
int main (){
    int a;
    printf("Enter a year : ");
     
    scanf("%d",&a);
    if (a % 4 == 0)
    {
        printf("given year is leap year");
    }
    else if (a % 4 != 0)
    {
        printf("given year is not leap year ");
    }
      return 0;
}