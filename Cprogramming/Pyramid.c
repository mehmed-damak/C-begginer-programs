#include<stdio.h>
#include<stdlib.h>
#include<unistd.h>
int main()  
{  
      
    int i, j, rows, k = 0;  
    printf (" Enter a number to define the rows:");  
    scanf ("%d", &rows);   
    for ( i =1; i <= rows; i++)  
    {  
        sleep(1);
        for ( j = 1; j <= rows - i; j++)  
        {  
            printf ("  ");   
        }  
        for ( k = 1; k <= ( 2 * i - 1); k++)  
        {  
            printf ("* "); 
        }  
        printf ("\n");  
    }  
    return 0;  
}  