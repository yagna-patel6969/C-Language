#include<stdio.h>
int main (){

int x,y;
printf("Enter a 'X' coordinate :");
scanf("%d",&x);

printf("Enter a'Y' coordinate :");
scanf("%d",&y);

if(y==0 && x!=0){
    printf("point on a x axies");
}
else if(x==0 && y!=0){
    printf("point on a y axies");
}
else if(x==0 && y==0){
    printf("point on a origin");
}
    return 0;
}