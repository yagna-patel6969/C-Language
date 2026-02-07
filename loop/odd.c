  #include<stdio.h>
 int main(){
    float a;
    printf("give number : ");
    scanf("%f",&a);
    for (int e=1;e<=a;e=e+2) 
    {
         printf("\n%d",e);
    }
    return 0;
 }