//Move all zeroes to end while keeping order of non-zero elements of [0,1,0,3,12]

#include<stdio.h>
int main(){

    int arr[]={0,1,0,3,12};
    int lenth=sizeof(arr)/sizeof(arr[0]);
    int j=0;
    for (int i = 0; i < lenth; i++)
    {
        if (arr[i] != 0)
        {
            arr[j]=arr[i];
            j++;
        }
        
    }
    
    while (j<lenth)
    {
        arr[j]=0;
        j++;
    }
    
    for (int i = 0; i < lenth ; i++)
    {
        printf("%d ",arr[i]);
    }
    
    return 0;
}