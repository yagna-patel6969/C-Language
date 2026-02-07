 #include<stdio.h>
 int main(){
     int o;
    printf("first element : ");
    scanf("%d",&o);
    int b;
    printf(" diffrence between two element : ");
    scanf("%d",&b);
    int u;
    printf("how many terms you want : ");
    scanf("%d",&u);
    for(int z=o;z<=u;z=z+b){
        printf("%d \n",z);
    }
    return 0;
 }