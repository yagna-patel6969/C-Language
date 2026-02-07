#include<stdio.h>
int main (){

    int a,b;
    printf("Enter a number :");
    scanf("%d",&a);

    b=a%10; //%10 gives us last digit
   if(b%2==0){
      printf("Last digit is even");
}
    else{
        printf("Last digit is even");
    }
    return 0;
}