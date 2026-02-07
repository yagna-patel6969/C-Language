#include<stdio.h>
int main(){
int n;
    printf("input : ");
    scanf("%d",&n);
    for (int q=1;q<=10;q++)
    {
        printf("\n%d * %d =%d",n, q ,n*q);}
    return 0;
}