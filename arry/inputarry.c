#include <stdio.h>
int main() {
     
int size;
printf("Enter arry size:");
scanf("%d",&size);


 int arry[size];
 int j=1;
for(int i=0 ; i<size ; i++ ){
   
    
    printf("Enter %d arry:",i);
    scanf("%d",&arry[i]);
    printf("%d\n",arry[i]);
    j++;
}
printf("%d\n",arry[size]);

    return 0;
}
