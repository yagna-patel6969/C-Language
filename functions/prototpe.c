#include<stdio.h>
// when function are not in sequnce than we use it.
#include<stdio.h>

void india(){
    printf("You are in India\n");
    void australia(); //proto type
    australia(); // calling australia function
    return;
}

void england(){
    printf("You are in England\n");
    return;
}

void australia(){
    printf("You are in Australia\n");
    void england();  //proto type
    england(); // calling england function
    return;
}

int main(){

    india();  // calling india function

    return 0;
}