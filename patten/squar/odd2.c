// outer loop show number of row 
//  inner loop show number of column
 



#include<stdio.h>
int main(){

int a;
printf("ENter a row number:");
scanf("%d",&a);

 

for(int i=1 ; i<=a ; i++){
    int b=1;
    for( int j=1 ; j<=a; j++){
    printf("%d,",b);
    b=b+2;
    }
printf("\n");   
}



    return 0;
}