// Write a program having a variable "i", Print the addresh of "i".Pass this variable to a function and print its address. Are these addresses same? Why?


#include <stdio.h>
int returning(int* ptr){
    printf("The value of ptr is %d\n", ptr);
    printf("The value of ptr is %d\n", *ptr);
    return 5;
}
int main(){
    int i = 2;
    int* ptr = &i;
    printf("The address of i is %d\n", &i);
    returning(ptr);
    return 0;
} 