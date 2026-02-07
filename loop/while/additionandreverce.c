#include<stdio.h>
int main(){

int a,b,c=0,d,temp;
printf("Enter a number:");
scanf("%d",&a);

 temp=a ; //store orignal value
 
while(a>0){
    b=a%10;
    c=c*10+b;
    a=a/10;
    }
      printf("revers=%d\n",c);
      d=temp+c;
     printf("%d\n",d);
    return 0;
}