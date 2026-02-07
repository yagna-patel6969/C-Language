//Compress a string. input-->"aaabbc"output-->"a3b2c1"
#include <stdio.h>
#include <string.h>

int main() {
    char str[] = "aaabbc"; 

    int lenth = strlen(str);

    for (int i = 0; i < lenth;)
    {
        char sample=str[i];
        int count =0;

        while (str[i]==sample && i<lenth)
        {
            count++;
            i++;
        }
        printf("%c%d", sample, count);
    }
    
    return 0;
}
