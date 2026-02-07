 

#include<stdio.h>
int main(){

int a;
printf("ENter a row number:");
scanf("%d",&a);

int b;
printf("Enter a colum number:");
scanf("%d",&b);

for(int i=1 ; i<=a ; i++){
     
     int c=1;
    for( int j=1 ; j<=b ; j++){
        int d=c+64;
        char ch=(char)d;
    printf("%c",ch);
     c++;
    }
printf("\n");
}
return 0;
}