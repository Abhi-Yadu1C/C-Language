//Pointer arithmetic
#include <stdio.h>

int main(){
    //Pointer Arithmetic using Integer pointer

    // int a = 5;
    // int* ptr = &a;
    // printf("Thre address of a is a %u\n", ptr); // prints the memory address of a
    // printf("Thre address of a is a %u\n", ptr); // prints the memory address of a
    // ;
    // ptr++;
    // printf("Thre address of a is a %u\n", ptr); // prints the memory
    // return 0;

    // POINTER ARITHMETIC USING CHARACTER POINTER

    char a = 'A';
    char* ptr = &a;
    printf("The address of a is %u\n", &a); // prints the memory address of
    printf("The address of a is %u\n", ptr); // prints the memory address of
    ptr++;
    printf("The address of a is %u\n", ptr); // prints the memory address of
    return 0;

}