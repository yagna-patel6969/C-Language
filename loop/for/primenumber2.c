

// divisin by 1 and till a



#include<stdio.h>
int main(){

int a;
printf("Enter a number:");
scanf("%d",&a);
int b=0;
for(int i=1 ; i<=a ; i++){
    if(a%i==0){
        b++;
    }
}
if(b==2){
    printf("Number is prime");
}
else{
    printf("Number is not prime");
}

    return 0;
}

