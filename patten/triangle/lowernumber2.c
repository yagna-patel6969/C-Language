// 1
// 22
// 333
// 4444




#include<stdio.h>
int main(){

int a;
printf("Enter number of row:");
scanf("%d",&a);

for(int i=1 ; i<=a ; i++){
    for(int j=1 ; j<=i ; j++){
        printf("%d",i);
    }
    printf("\n");
}

    return 0;
}