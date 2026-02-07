#include<stdio.h>
#include<math.h>
int main(){

int a,b,c,d,e;
float r1,r2;
printf("Enter a:");
scanf("%d",&a);

printf("Enter b:");
scanf("%d",&b);

printf("Enter c:");
scanf("%d",&c);

d=(b*b)-(4*a*c);
if(d>0){
    r1=(-b+sqrt(d))/(2*a);
    r2=(-b-sqrt(d))/(2*a);
    printf("Foe equation roots r1=%.3f and r2=%.3f",r1,r2);
}
else if (d<0)
{
     printf("Delta is negative so roots is imaginry");
}
else if(d==0){
        e=-(b)/(2*a);
        printf("Delta is zero si root is:%d",e);
    }
     



    return 0;
}