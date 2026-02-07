  #include<stdio.h>
 int main(){
    float a;
    printf("give number : ");
    scanf("%f",&a);
    for (int i=1;i<=a;i++) 
    {
          if(i%2==0){
            printf("%d\n",i);
          }
    }
    return 0;
 }