#include<stdio.h>
#include<string.h>
int main(){
    char name[100];
    int  cout=0;

     printf("Enter Your Name :");
     scanf("%s",name);

     for(int i=0 ; i<strlen(name) ; i++){
        if((name[i]>=65 && name[i]<=90) ||
        (name[i]>=97 && name[i]<=122))
        cout++;
     }

     printf("Number Of Charecter In Your Name Is :%d",cout);
    return 0;
}