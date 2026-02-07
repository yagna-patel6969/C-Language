#include<stdio.h>
int main(){

int a;
printf("ENter a row number:");
scanf("%d",&a);

 
// int b=1;
for(int i=1 ; i<=a ; i++){
    for( int j=1 ; j<=i+2; j++){
    printf("%d,",i);
    // b=b+2;
    }
printf("\n");   
}



    return 0;
}