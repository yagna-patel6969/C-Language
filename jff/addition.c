#include<stdio.h>
int main(){

int matrix1[2][2],matrix2[2][2],matrix3[2][2];
int i,j;

printf("Enter a 1st matrix element:");
for(i=0 ; i<2 ; i++){
    for(j=0 ; j<2 ; j++){
        scanf("%d",&matrix1[i][j]);
    }
}

printf("Enter a 2nd matrix element:\n");
for(i=0 ; i<2 ; i++){
    for(j=0 ; j<2 ; j++){
        scanf("%d",&matrix2[i][j]);
    }
}

for(i=0 ; i<2 ; i++){
    for(j=0 ; j<2 ; j++){
        matrix3[i][j]=matrix1[i][j]+matrix2[i][j];
    }
}

printf("Addition of two matrices is:\n");
for(i=0 ; i<2 ; i++){
    for(j=0 ; j<2 ; j++){
        printf("%d ",matrix3[i][j]);
    }
    printf("\n");
}


    return 0;
}