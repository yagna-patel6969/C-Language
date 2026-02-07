 #include<stdio.h>
 int main(){
     int g;
    printf("first element : ");
    scanf("%d",&g);
    int b;
    printf(" diffrence between two element : ");
    scanf("%d",&b);
    int v;
    printf("how many terms you want : ");
    scanf("%d",&v);
    for(int z=1;z<=v;z++){
        printf("\n %d",g+((z-1)*b));
    }
    return 0;
 }