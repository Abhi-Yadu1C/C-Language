#include <stdio.h>

int main(){
     int i = 72;
    int* j = &i; // j is a pointer pointing to i
    printf("the address of i is %p\n", &i);
    printf("the address of i is %p\n", j);

    
    return 0;
}