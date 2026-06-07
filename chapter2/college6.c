// Develop a program to print the Fibonacci series using a loop.

#include <stdio.h>

int main()
{
    int n , i;
    int a = 0 ,b = 1 ,c;
    printf("Enter Number Of terms:-");
    scanf("%d",&n);

    printf("Fibonnaci Series:%d%d",a,b);

    for(i = 3 ; i <= n; i++)
    {
        c = a + b;
        
        printf("%d",c);

        a = b;
        b = c;

    }
    return 0;
}   