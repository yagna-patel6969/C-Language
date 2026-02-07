#include<stdio.h>
int main(){

    int a,b,c ;
    printf("Enter a first side  triangle :");
    scanf("%d",&a);

     
    printf("Enter a secondd side triangle :");
    scanf("%d",&b);

     
    printf("Enter a  theird side triangle :");
    scanf("%d",&c);

    if(a+b>c && a+c>b && b+c>a){
        printf("all three side can be triangle side");
    }
    else{
       printf("all three side can not  be triangle side"); 
    }
    return 0;
}
