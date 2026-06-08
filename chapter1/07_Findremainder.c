#include <stdio.h>
int main()
{
    int a,b;
    printf("Enter the Number:-");
    scanf("%d",&a);
    printf("Enter the Number:-");
    scanf("%d",&b);
    // int q = a/b;
    // int r = a - b*q;//Divisior * Quotient + Remainder = Dividend
    // printf("The remainder when %d is divided by %d is : %d",a,b,r);
    int c = a % b;
    //By using Modulo Operator
    printf("The remainder when 6 is divided by is %d",c);



    return 0;
}