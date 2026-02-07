#include<stdio.h>
void england(){
    printf("You are in England\n");
    return;
}

void australia(){
    printf("You are in Australia\n");
    england(); // calling england function
    return;
}

void india(){
    printf("You are in India\n");
    australia(); // calling australia function
    return;
}

int main(){

    india();  // calling india function

    return 0;
}