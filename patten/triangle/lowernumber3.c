// 1
// 23
// 456
// 78910


#include<stdio.h>
int main(){

int a;
printf("Enter numbers of row  :");
scanf("%d",&a);

 
  int b=1; 
for(int i=1 ; i<=a ; i++){
  
    for( int j=1 ; j<=i; j++){
       
    printf("%d,",b);
    b++;
    
    }
printf("\n");   
}



    return 0;
}