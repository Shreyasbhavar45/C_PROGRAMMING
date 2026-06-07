// Implement arithmetic, relational, and logical operations in C programs and
// display the results

#include <stdio.h>
int main ()
{
    int a = 10;
    int b = 5;

    //Arithemetic Operations
    printf("Arithemetic Operations:\n");
    printf("Addition = %d\n",a+b);
    printf("Subtraction = %d\n",a-b);
    printf("Multiplication = %d\n",a*b);
    printf("Division = %d\n",a/b);
    printf("Modulus = %d\n",a%b);

    //Relational Operations
    printf("Relational Operators:\n");
    printf("a > b = %d\n",a > b);
    printf("a < b = %d\n",a < b);
    printf("a == b = %d\n",a == b);
    printf("a != b = %d\n",a != b);

    //Logical Operations
    printf("Logical Operators:\n");
    printf("a > b && a > 0 = %d\n",a > b && a > 0);
    printf("a < b || b > 0 = %d\n",a < b || b > 0);
    printf("!(a > b) = %d\n", !(a > b));

    return 0 ;
    

}