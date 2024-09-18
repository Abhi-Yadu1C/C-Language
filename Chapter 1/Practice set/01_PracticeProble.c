#include <stdio.h>

int main() {
    int age;
    
    // Prompt the user to enter their age
    printf("Enter your age: ");
    
    // Use scanf to take input from the user and store it in the 'age' variable
    scanf("%d", &age);
    
    // Print the age back to the console
    printf("Your age is: %d\n", age);
    
    return 0;
}