 #include<stdio.h>
 int main(){
    int f;
    printf("enter first element : ");
    scanf("%d",&f);
    int w;
    printf("enter ratio : ");
    scanf("%d",&w);
    int y;
    printf("how many terms you want : ");
    scanf("%d",&y);
    for(int m=f;m<=y;m=m*w){
        printf("\n%d",m);
        
    }
    return 0;
 }