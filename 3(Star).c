/*

*
**
***
****
       */ 

#include <stdio.h>

int main()
{
    // The loop for printing pattern. 

    for(int i = 1 ; i <= 4; i++)
    {
        for (int j = 1 ; j<= i; j++)
        {
            printf("*");
        }
        printf("\n");
    }
    return 0;
}
