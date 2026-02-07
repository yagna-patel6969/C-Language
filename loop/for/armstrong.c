#include<stdio.h>
#include<math.h>
int main(){

int a,p=0,c,sum=0;
printf("Enter a number:");
scanf("%d",&a);
int original=a;
 int temp=a;
while(temp>0){
    temp=temp/10;
      p++;
}
printf("\ncount=%d",p);
int b;
temp=a;
 while(temp>0  ){
    b=temp%10;
    c=pow(b,p);
    sum=sum+c;
    temp=temp/10;
    }
printf("\nsum=%d",sum);
if(sum==original){
    printf("\nGiven number is armstrong");
}
else{
     printf("\nGiven number is not armstrong");
}
    return 0;
}