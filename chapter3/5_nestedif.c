// WAP to see by nested if that the number is divisible by 3 or 5
#include <stdio.h>
int main()
{
    int num;
    printf("Enter the number:-");
    scanf("%d",&num);
    // condition to check that number is divisible by 3 or 5 .
    if(num % 5 == 0){
        if(num % 3 == 0){
            printf("The number is divisible by 5 and 3");

        }
        else{
            printf("The number is not divisble by 5 and  3");
        }
    }
    else{
        printf("The number is not divisible by 5 and 3");
    }


    return 0;
}