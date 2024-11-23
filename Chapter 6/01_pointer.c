#include <stdio.h>

int main(){
    int i = 72;
    int* j = &i; // J is pointer pointing to i
    printf("The address of i is %p\n", &i);
    printf("The address of i is %u\n", j);

    printf("The value address of i is %u\n", *j);
    printf("The value address of i is %u\n", *(&i));
    return 0;
}