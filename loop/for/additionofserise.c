// 1-2+3-4+5------upto n



#include<stdio.h>
int main(){

int a,sum=0;
printf("Enter a number:");
scanf("%d",&a);

  for(int i=1 ; i<=a ; i++){
   if(i%2==0){
      sum=sum-i;
   }
   else{
      sum=sum+i;
   }
  }
 printf("%d",sum);
    return 0;
}