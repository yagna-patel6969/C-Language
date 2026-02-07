#include<stdio.h>
int main(){

int matrix[3][3],matrixt[3][3];
int i,j;

printf("Enter a element:");
for(i=0 ; i<3 ; i++){
    for(j=0 ; j<3 ; j++){
        scanf("%d",&matrix[i][j]);
    }
}

for(i=0 ; i<3 ; i++){
    for(j=0 ; j<3 ; j++){
        matrixt[j][i]=matrix[i][j];
    }
}

printf("given matrix transpose is:\n");
for(i=0 ; i<3 ; i++){
    for(j=0 ; j<3 ; j++){
        printf("%d ",matrixt[i][j]);
    }
    printf("\n");
}

    return 0;
}