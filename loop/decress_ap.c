#include<stdio.h>
int main(){
    int a;
    printf("enter a value : ");
    scanf("%d",&a);
    int n;
    printf("how many terms you want : ");
    scanf("%d",&n);
    for(int i=a;i<=n;i++){
        printf("\n%d",a);
        a=a-3;
    }
    return 0;
}