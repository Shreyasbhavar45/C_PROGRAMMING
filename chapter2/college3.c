// Write a C program to implement various control flow statements such as if-else,
// switch-case, and loops, to solve a given problem.

#include <stdio.h>
int main ()
{
    int num ,choice,i;

    printf("Enter a Number:\n");
    scanf("%d",&num);

    //if - else check even or odd
    if(num%2==0)
        printf("Number is even\n");
    
    else
        printf("Number is odd\n");


    //switch-case-menu

    printf("Menu:\n1.square\n2.cube\n");
    printf("Enter Your choice:");
    scanf("%d",&choice);

    switch(choice)

    {
        case 1:
        printf("square of num :- %d\n",num*num);
        break;

        case 2:
        printf("Cube of num :-%d\n",num*num*num);
        break;

        default:
        printf("Invalid choice\n");


    }

    //loop : print num from 1 to num

    printf("Number from 1 to %d:\n",num);
    {
    
    for (i=1;i<=num;i++)

    printf("%d\n",i);
    }

    return 0;
}