#include<stdio.h>
#include<math.h>
int main(){

int num,count=0,c,sum=0;
printf("Enter a number:");
scanf("%d",&num);
int original=num;
 int temp=num;
while(temp>0){
    temp=temp/10;
      count++;
}
printf("\ncount=%d",count);
int b;
temp=num;
 while(temp>0  ){
    b=temp%10;
    c=(int)pow(b,count);
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