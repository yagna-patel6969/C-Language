#include <stdio.h>
int main() {
    int num,mod,div;
    printf("Emter a number:");
    scanf("%d",&num);
    int var=0;
    int temp=num;
    while(num>0){
         mod=num%10;
         var=(var*10)+mod;
          num=num/10;
        }
        printf("%d",var);
    if(temp==var){
        printf("\nGiven number is pelendrom");
    }
    else{
        printf("\nGiven number is not pelendrom");
    }



    return 0;
}
