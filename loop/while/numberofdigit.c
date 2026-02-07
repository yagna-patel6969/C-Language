#include<stdio.h>
int main(){

int a,b=0;
printf("Enter a number:");
scanf("%d",&a);

 while(a > 0){
        a=a/10;
        b++;
               
    }
    printf("%d",b);

    return 0;
}