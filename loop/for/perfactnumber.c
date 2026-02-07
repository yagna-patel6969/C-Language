 #include <stdio.h>
int main() {
     
int a;
printf("Enter a number:");
scanf("%d",&a);

 int sum=0;
for(int i=1 ; i<a ; i++){
    if(a%i==0){
         printf("%d",i);
         sum=sum+i;
    }
}
if(sum==a){
    printf("\nGiven number is perfact");
}
else{
     printf("\nGiven number is not perfact");
}
  return 0;
}
