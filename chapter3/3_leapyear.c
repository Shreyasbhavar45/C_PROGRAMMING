//Progran To find Out if year is leap or not
#include <stdio.h>
int main()
{
    int year;

    //take input
    printf("Enter the year:-");
    scanf("%d",&year);

    //check condition for leap year
    // ||--> this is not logical or (it tell if one condition is true then answer is true)
    if((year % 400 == 0)||(year % 4 == 0  && year % 100 != 0)){
        printf("%d is a Leap year",year);

    }
    else{
        printf("%d is not a leap year",year);
    }
    return 0;
}