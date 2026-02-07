

// divisin by 2 and till a-1


#include<stdio.h>
int main(){

int a;
printf("Enter a number:");
scanf("%d",&a);


if(a<2){
    printf("Giveen number is not prime");
}

else{
    int b=0;
    for(int i=2 ; i<=a-1 ; i++){
    if(a%i==0){
        b=1;
        break;
    }
}   

if(b==0){
    printf("Given nuumber is prime");
}
else{
    printf("Giveen number is not prime");
}
}

    return 0;
}