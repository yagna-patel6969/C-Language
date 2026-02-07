 // outer loop show number of row 
//  inner loop show number of column




#include<stdio.h>
int main(){

int a;
printf("Enter odd numbers of row  :");
scanf("%d",&a);

 int b;
printf("ENter odd numbers of column:");
scanf("%d",&b);

for(int i=1 ; i<=a ; i++){
    int c=1;
    
    for( int j=1 ; j<=b; j++){
        if(i<=a && j<=b){
           printf("*");
        }
        else{
            printf(" ");
        }
      }
printf("\n");   
}
 return 0;
}