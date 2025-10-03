// Generalize code to print pattern of n x m size.
#include <stdio.h>

int main()
{
    int n ;
    printf("Enter number of rows");
    scanf("%d", &n);
    int m ;
    printf("Enter number of columns");
    scanf("%d", &m);
    
    // The loop for printing pattern. 

    for(int i = 1 ; i <= n; i++)
    {
        for (int j = 1 ; j<= m; j++)
        {
            printf("*");
        }
        printf("\n");
    }
    return 0;
}
