    // post increement

// use x than increement 
#include<stdio.h>
int main(){

int x;
printf("Enter a number:");
scanf("%d",&x);

 
int y=x++;

printf("x=%d\n",x);
printf("y=%d\n",y);


  //pre increment

// increement first than use x
int a;
printf("Enter a number:");
scanf("%d",&a);


int b=++a;

printf("a=%d\n",a);
printf("b=%d\n",b); 
    return 0;
}