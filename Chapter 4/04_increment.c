#include <stdio.h>

int main(){
    int i = 5;
    printf("The value of i is %d\n",i);

    i = i + 5; //10
    printf("The value of i is %d\n",i);
    i++; //11 

    printf("The value of i is %d\n",i);

    // i++ prints i first and then increments i (Post increments Operator)
    // ++i increments i first and then prints i (Post increments Operator)

    return 0;
}