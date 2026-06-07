// Create a function in C to calculate the factorial of a given number and display
// the result.


#include <stdio.h>

//function to calculate factorial
int factorial(int n)
{
    int i,fact = 1;

    for(i = 1;i<=n;i++)

    {
        fact = fact * i;

    }
    return fact;
}

int main()
{
    int num, result;
    printf("Enter a number:-");
    scanf("%d",&num);

    result = factorial(num);

    printf("Factorial of %d=%d",num,result);

    return 0;
}