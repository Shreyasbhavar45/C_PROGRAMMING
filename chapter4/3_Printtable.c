// //print the table
// #include <stdio.h>
// int main(){
//     int i;
//     for(i = 19;i<=190;i=i+19){
//         printf("%d ",i);
//     }
//     return 0;
// }


//
#include <stdio.h>

int main()
{
    int n, i;

    printf("Enter a number: ");
    scanf("%d", &n);

    for(i = 1; i <= 10; i++)
    {
        printf("%d x %d = %d\n", n, i, n * i);
    }

    return 0;
}
