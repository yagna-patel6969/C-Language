#include<stdio.h>
int main(){

    int x,y;
printf("Enter a 'X' coordinate :");
scanf("%d",&x);

printf("Enter a'Y' coordinate :");
scanf("%d",&y);

 if(x==0 && y==0){
    printf("point on a origin");
}

else if(x<0){
    if(y>0){
        printf("point in 2rd phase");
    }
    else if(y<0){
        printf("point in 3rd phase");
    }
}
else if(x>0){
    if(y>0){
        printf("point in 1st phase");
    }
    else if(y<0){
        printf("point in 4th phase");

    }
}
 if(y==0 && x!=0){
    printf("point on a x axies");
}
if(x==0 && y!=0){
    printf("point on a y axies");
}
    return 0;
}