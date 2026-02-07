    // outer loop show number of row 
    //  inner loop show number of column




    #include<stdio.h>
    int main(){

    int a;
    printf("ENter a row number:");
    scanf("%d",&a);

    int b;
    printf("Enter a colum number:");
    scanf("%d",&b);

    for(int i=1 ; i<=a ; i++){
        for( int i=1 ; i<=b ; i++){
        printf("*");
        }
    printf("\n");
    }



        return 0;
    }