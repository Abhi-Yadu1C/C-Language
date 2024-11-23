#include <stdio.h>

int main(){
    int marks[90]; //Reserve spsce store 90 integers

    marks[0] = 45;
    marks[1] = 78;
    // we can go all the way till marks[89]
    printf("Marks 0 and Marks 1 is %d %d", marks[0], marks[1]);
    return 0;
}