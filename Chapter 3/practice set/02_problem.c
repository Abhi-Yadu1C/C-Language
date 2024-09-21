#include <stdio.h>

int main(){
    int marks1, marks2, marks3;
    /*
    int value_of_harrys_marks;
    int value_of_rohans_marks;
    printf("%d", value_of_harrys_marks);
    */

    printf("Enter marks1: \n");
    scanf("%d", &marks1);
    printf("Enter marks2: \n");
    scanf("%d", &marks2);
    printf("Enter marks3: \n");
    scanf("%d", &marks3);
    printf("The marks are %d %d and %d", marks1, marks2, marks3);

    if(marks1<33 || marks2<33 || marks3<33){
        printf("\nYou are failed");
    }
    else if((marks1 + marks2 + marks3)/3 <40){
        printf("\nWell done");
    }

    return 0;
}