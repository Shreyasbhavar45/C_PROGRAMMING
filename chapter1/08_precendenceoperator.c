#include <stdio.h>

int main()
{
    /*
    ============================================
              OPERATOR PRECEDENCE IN C
    ============================================

    Operator Precedence = Priority of operators.

    Higher priority operators execute first.

    Common Order:

    1. ()           Parentheses
    2. *, /, %      Multiplication, Division, Modulus
    3. +, -         Addition, Subtraction
    4. <, >, <=, >= Relational
    5. ==, !=       Equality
    6. &&           Logical AND
    7. ||           Logical OR
    8. =            Assignment

    ============================================
    */

    // Example 1
    int a = 2 + 3 * 4;

    /*
    Step 1: 3 * 4 = 12
    Step 2: 2 + 12 = 14

    a = 14
    */

    printf("a = %d\n", a);



    // Example 2
    int b = (2 + 3) * 4;

    /*
    Parentheses have highest priority.

    Step 1: (2 + 3) = 5
    Step 2: 5 * 4 = 20

    b = 20
    */

    printf("b = %d\n", b);



    // Example 3
    int c = 10 - 6 / 2;

    /*
    Step 1: 6 / 2 = 3
    Step 2: 10 - 3 = 7

    c = 7
    */

    printf("c = %d\n", c);



    // Example 4
    int d = 5 + 2 * 3 - 1;

    /*
    Step 1: 2 * 3 = 6
    Step 2: 5 + 6 - 1
    Step 3: 11 - 1
    Step 4: 10

    d = 10
    */

    printf("d = %d\n", d);



    // Example 5
    int e = (5 + 2) * (3 - 1);

    /*
    Step 1: (5 + 2) = 7
    Step 2: (3 - 1) = 2
    Step 3: 7 * 2 = 14

    e = 14
    */

    printf("e = %d\n", e);



    return 0;
}