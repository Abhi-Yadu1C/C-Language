#include <stdio.h>

//Function prototype
int sum(int, int);

//Fuction definition
int sum(int a, int b) {
    printf("The sum is %d\n", a+b);
    return a+b;
}


int main(){
    int a = 4;
    int b = 4;

    // int c = a + b;
    // printf("%d\n", c);
    // return 0;

    sum(a,b); // Function call

    int a1 = 6;
    int b1 = 6;

    // int c = a + b;
    // printf("%d\n", c);
    // return 0;

    sum(a1,b1); // Function call

    int a2 = 8;
    int b2 = 8;

    // int c = a + b;
    // printf("%d\n", c);
    // return 0;

    sum(a2,b2); // function call
} 