#include <stdio.h>

int main(){
    int num1, num2, hcf = 1, i;
    printf("Enter The number For HCF ");
    scanf("%d %d", &num1, &num2);

    int min = (num1 < num2) ? num1 : num2;
    printf("minimum value %d\n",min);

    for ( i = 1; i <= min; i++)
    {
        if (num1 % i == 0 && num2 % i == 0){
            hcf = i;
        }
    }
    printf("HCF of %d and %d is: %d\n", num1, num2, hcf);

    
    return 0;
}