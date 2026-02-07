#include<stdio.h>
int main(){

int a;
printf("Enter a number:");
scanf("%d",&a);

int b,c;
 b=a%10;
while(a>=10){
    a=a/10;
}
c=a;
int sum=b+c;
printf("%d",sum);
    return 0;
}