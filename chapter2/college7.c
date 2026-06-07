//  Write a C program to initialize and display elements of a one-dimensional array.
#include <stdio.h>

int main()
{
    int arr[5] = {10,20,30,40,50};
    int i ;

    printf("Array Element are:\n");
    for (i = 0; i < 5; i++)
    {

        printf("arr[%d]=%d\n",i,arr[i]);

    }
    
    return 0;
}