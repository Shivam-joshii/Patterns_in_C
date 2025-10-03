/* 

*****
***
**
*
       */   
#include <stdio.h>

int main()
{
    // The loop for printing pattern. 

    for(int i = 4; i >= 1; i--)
    {
        for (int j = 1 ; j<= i; j++)
        {
            printf("*");
        }
        printf("\n");
    }
    return 0;
}
