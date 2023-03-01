#include <stdio.h>
#include <stdlib.h>
#include <unistd.h>
int main()
{
    int i, j, n;
    printf("give me the number of rows:");
    scanf("%d", &n);
    for (i = 1; i <= n; ++i) 
    {  
        for (j = 1; j <= i; ++j) 
        {  
            printf ("* "); 
        }  
        printf ("\n");   
    }  
printf("done");
}
