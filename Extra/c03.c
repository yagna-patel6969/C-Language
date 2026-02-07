#include<stdio.h>
int main (){
    // example of for loop 
    float n;
    printf("give number how many times you want to type hello yagna :");
    scanf("%f",&n);
    for ( int i=1; i<=n; i++)
    {
        printf("hellow yagna\n");

    }
    // // printing n numbers
    float k;
    printf("give value of k : ");
    scanf("%f",&k);
    for ( int u=1 ; u<=k ; u++  )
    {
        printf("\n%d",u );
    }
    // // printing odd number from 0 to n
    float a;
    printf("give number : ");
    scanf("%f",&a);
    for (int e=1;e<=a;e=e+2) 
    {
        printf("\n%d",e);
    }
    //   // printing even number from 0 to n
    float p;
    printf("give number : ");
    scanf("%f",&p);
    for (int y=0;y<=p;y=y+2)
    {
        printf("\n %d",y);
    }
    // print table of 19
    int n;
    printf("input : ");
    scanf("%d",&n);
    for (int q=1;q<=10;q++)
    {
        printf("\n%d * %d =%d",n,q,n*q);
        /* code */
    }
    ap series nterms
    int g;
    printf("first element : ");
    scanf("%d",&g);
    int b;
    printf(" diffrence between two element : ");
    scanf("%d",&b);
    int v;
    printf("how many terms you want : ");
    scanf("%d",&v);
    // for(int z=1;z<=v;z++){
    //     printf("\n %d",g+((z-1)*b));
    // }
    ap series up to n 
    int o;
    printf("first element : ");
    scanf("%d",&o);
    int b;
    printf(" diffrence between two element : ");
    scanf("%d",&b);
    int u;
    printf("how many terms you want : ");
    scanf("%d",&u);
    for(int z=o;z<=u;z=z+u){
        printf("%d \n",z);
    }
    lets print gp series
    int f;
    printf("enter first element : ");
    scanf("%d",&f);
    int w;
    printf("enter ratio : ");
    scanf("%d",&w);
    int y;
    printf("how many terms you want : ");
    scanf("%d",&y);
    for(int m=1;m<=y;m++){
        printf("\n%d",f);
        f=f*w;
    }
    return 0 ;
}