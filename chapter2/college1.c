// Write a C program to declare and initialize variables of different data 
// types and display their sizes

#include <stdio.h>

int main ()
{
    int a = 10; //integer variable
    float b = 10.90; //Float decimal value
    char c = 'A'; //character variable
    double d = 20.1234; //High precision Decimal

    printf("Integer Value = %d, Size = %lu bytes\n",a,sizeof(a));
    printf("Float Value = %f, Size = %lu bytes\n",b,sizeof(b));
    printf("Char Valuer = %c, Size = %lu byte\n",c,sizeof(c));
    printf("double Value = %1f, Size = %lu bytes\n",d,sizeof(d));
    
    return 0;
}