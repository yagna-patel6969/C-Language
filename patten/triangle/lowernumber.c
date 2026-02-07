// outer loop show number of row 
//  inner loop show number of column
// 1
// 12
// 123
// 1234



#include<stdio.h>
int main(){

int a;
printf("Enter numbers of row  :");
scanf("%d",&a);

 

for(int i=1 ; i<=a ; i++){
    for( int j=1 ; j<=i; j++){
    printf("%d",j);
    
    }
printf("\n");   
}



    return 0;
}