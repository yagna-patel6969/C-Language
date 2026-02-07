#include<stdio.h>
int main(){

int matrix[3] [3];
int i,j;

printf("Enter a element:");
for(i=0 ; i<3 ; i++){
    for(j=0 ; j<3 ; j++){
        scanf("%d",&matrix[i][j]);
    }
}

printf("given matrix element is:\n");
for(i=0 ; i<3 ; i++){
    for(j=0 ; j<3 ; j++){
        printf("%d ",matrix[i][j]);
    }
    printf("\n");
}

    return 0;
}