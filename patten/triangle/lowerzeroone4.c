//  1
// 01
// 101
// 0101
#include<stdio.h>
int main(){

int a;
printf("Enter numbers of row  :");
scanf("%d",&a);

int b;
for(int i=1 ; i<=a ; i++){
  if(i%2!=0){
    b=1;
  }
  else{
    b=0;
  }
    for( int j=1 ; j<=i; j++){
     printf("%d",b);
     if(b==0){
        b=1;
     }
     else{
        b=0;
     }
    }
printf("\n");   
}



    return 0;
}