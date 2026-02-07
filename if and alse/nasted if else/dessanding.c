 #include<stdio.h>
int main(){

int a,b,c;
printf("Enter a:");
scanf("%d",&a);

printf("Enter b:");
scanf("%d",&b);

printf("Enter c:");
scanf("%d",&c);
 

if(a>=b && a>=c){
    if(b<=a && b>=c){
        printf("dssending order is:%d , %d , %d",a,b,c);
    }
    else{
        printf("Assending order is:%d , %d , %d",a,c,b);
    }
}
else if(b>=a && b>=c){
    if(a<=b && a>=c){
         printf("Assending order is:%d , %d , %d",b,a,c);
    }
    else{
         printf("Assending order is:%d , %d , %d",b,c,a);
    }
}
else if(c>=a && c>=b){
    if(a>=b && a<=c){
         printf("Assending order is:%d , %d , %d",c,a,b);
    }
         else{
             printf("Assending order is:%d , %d , %d",c,b,a);
         }
}
return 0;
}