#include <stdio.h>

int main(){
    int Income, tax=0;
    printf("Enter Income: \n")
    scanf("%d", &Income);
    if(Income<=250000){
        tax=0;
    }
    else if(Income<=500000){
        tax = 0;
    }
    else if(Income<=250000 && Income<=500000){
        tax = 0.05 * (Income - 250000)
    }
    else if(Income>500000 && Income<=100000){
        tax = 0.5 * (Income - 500000) + 0.05
    }
}