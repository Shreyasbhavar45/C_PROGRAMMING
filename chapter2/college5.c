// Write a program to find the sum of digits of a number using recursion.

#include <stdio.h>

int sumDigits(int n)
{
    if(n==0)
        return 0;

    return (n % 10) + sumDigits(n/10);

}

int main ()

{
    int num , result ;
    printf("Enter a Number:");
    scanf("%d\n",&num);

    result = sumDigits(num);

    printf("Sum of digits :-%d",result);

    return 0;
}