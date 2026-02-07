//Convert a binary number (given as a string) to its decimal (base-10) equivalent.in-->1010101out-->85

#include <stdio.h>
#include <string.h>
#include <math.h>

int main() {
    char str[]="1010101";
    int lenth=strlen(str);
    int dec=0;
    for (int i = 0; i < lenth ; i++)
    {
        dec=dec*2 + (str[i]-'0');
    }
    

    printf("number is :%d",dec);
    return 0;
}
