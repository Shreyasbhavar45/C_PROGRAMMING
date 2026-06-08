// Take Input From User //

#include <stdio.h>

int main()
{
    float radius;
    printf("Enter a Radius:-");
    scanf("%f",&radius);
    float pi;
    printf("Enter a pi:-");
    scanf("%f",&pi);
    float area = pi * radius * radius;
    printf("The are of circle is:%f\n",area);

    return 0;
}
