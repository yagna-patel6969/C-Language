#include<stdio.h>
#include<string.h>
int main(){

char str1[20],str2[20];
int c;

printf("Enter a 1st string:");
gets(str1);

printf("Enter a 2nd string:");
gets(str2);

c=strcmp(str1,str2);
if(c==0){
    printf("both same");
}

else if (c>0)
{
    printf("one is greter than two");
}

else{
    printf("one is samm than two");
}

    return 0;
}