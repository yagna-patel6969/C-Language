#include<stdio.h>
int main(){

int a=4,b=0;
while(a>=0){
    a--;
    b++;
    if(a==b)
    {
      continue;    
    }
    else{
        printf("\n %d %d",a,b);
    }
}

    return 0;
}