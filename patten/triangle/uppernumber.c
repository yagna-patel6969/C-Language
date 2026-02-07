// outer loop show number of row 
//  inner loop show number of column




#include<stdio.h>
int main(){

int a;
printf("ENter a row number:");
scanf("%d",&a);

 

for(int i=0 ; i<=a ; i++){
    for( int j=1 ; j<=a-i; j++){
    printf("%d",j);
    
    }
printf("\n");   
}



    return 0;
}