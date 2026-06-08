//Take positive integer input and tell if it is even or odd

#include <stdio.h>
int main()
{
    int num;
    //input
    printf("Enter a positive number:");
    scanf("%d",&num);

    if (num > 0){
        printf("This is a Positive Number");
    }
    else{
        printf("This is a Negative Number");
    
    }
    return 0;

}