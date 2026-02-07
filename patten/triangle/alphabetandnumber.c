 // outer loop show number of row 
//  inner loop show number of column




#include<stdio.h>
int main(){

int a;
printf("Enter numbers of row  :");
scanf("%d",&a);

 

for(int i=1 ; i<=a ; i++){
    int c=1;
    
    for( int j=1 ; j<=i; j++){
        if(i%2==0){
           int b=c+64;
           printf("%c",(char)b);
           c++;
        }
        else{
            printf("%d",j);
        }
      }
printf("\n");   
}
 return 0;
}