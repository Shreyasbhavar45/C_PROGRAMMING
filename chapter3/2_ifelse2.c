//Program to find out if number is Even or odd
#include <stdio.h>

int main()
{
    int num;

    //take input
    printf("Enter A Number:");
    scanf("%d",&num);

    //condition for even or odd
    if (num % 2 == 0){
        printf(" %d is Even",num);
    }
    else{
        printf("%d is Odd",num);
    }
    return 0;
}