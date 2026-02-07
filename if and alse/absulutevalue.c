#include<stdio.h>
int main(){
    float b;
    printf("Give me value : ");
    scanf("%f",&b);    
    if(b<0){
         b= b * (-1);
        printf("Given value's absulute value is :%f",b);
        }

else if(b>=0){
    printf("Given value's absulute value is :%f",b);
}
    return 0;
}