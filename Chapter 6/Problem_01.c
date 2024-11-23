// Write a program to print the address of a variable. Use this adress to get the value of the variable.

#include <stdio.h>

int main(){
    int i = 12;
    int* ptr = &i;

    printf("Variable address i is %p\n", &i);
    printf("Variable address i is %d\n", *ptr);
    return 0;
}