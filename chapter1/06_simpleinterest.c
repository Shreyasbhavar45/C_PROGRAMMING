#include <stdio.h>
int main()
{
    float principal,rate,time,si;
    //principal
    printf("Enter Principal:");
    scanf("%f",&principal);
    //rate
    printf("Enter rate:");
    scanf("%f",&rate);
    //time
    printf("Enter time:");
    scanf("%f",&time);
    //simple interest (si)
    si = (principal*rate*time)/100;
    printf("The simple Interest is:-%f\n",si);

    return 0;
}