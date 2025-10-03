/*
12345678
1234567
123456
12345
1234
123
12
1
Reverse number triangle of any number .
       */   
#include <stdio.h>

int main()
{ 
   int n ;
   printf("number triangle");
   scanf("%d", &n);
    // The loop for printing pattern. 

    for(int i =1 ; i <= n; i++)
    {
        for (int j = 1 ; j<= n+1-i; j++)
        {
            printf("%d", j);
        }
        printf("\n");
    }
    return 0;
}
