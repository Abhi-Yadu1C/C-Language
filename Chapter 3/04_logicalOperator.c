#include <stdio.h>

int main(){
    /*
    Logical Operators in C:
&& (Logical AND)
Returns true if both operands are true.
Example: a && b (true only if both a and b are true).

|| (Logical OR)
Returns true if at least one operand is true.
Example: a || b (true if either a or b is true, or both).

! (Logical NOT)
Returns true if the operand is false, and false if the operand is true (inverts the Boolean value).
Example: !a (true if a is false, false if a is true).
    */

        int a = 1; int b = 1;
        printf("The value of a and b is %d\n", a&&b);
        printf("The value of a or b is %d\n", a||b);
        printf("The value of not a is %d\n", !a);
    return 0;
}