#include <stdio.h>

    int sum(int, int);

    int sum(int a, int b){
        a = 8; // Sum function cannot change x usi9ng a because copy of x  is provided to sum in a
        return a + b;
    }
    int main(){
        int x = 1, y = 6;
        printf("The sum of 1 and 6 is %d\n", sum(x, y));
        printf("value of x and y is  %d\n", (x+y));
        return 0;
    }

