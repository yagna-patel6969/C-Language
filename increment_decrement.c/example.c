#include<stdio.h>
int main(){

int a=4,b,c;
b=--a;
c=a--;
printf("%d %d %d\n",a,b,c);

int d=5,e,f;
e=++d;
f=d++;
printf("%d %d %d",d,e,f);

    return 0;
}