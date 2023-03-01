#include <stdio.h>
#include <stdlib.h>
int main ()
{
    float arr[10];
    int i=1;
    float j=1;
    int k=1;
    float sum, average;
    for(i=0;i<=9;i++)
    {
        printf("enter grade \n");
        scanf("%f", &arr[i]);
    }

    
    for(k=0;k<=9;k++)
    {
        j=arr[k];
        sum=sum+j;
    }
    average=sum/10;
    printf("average is %f", average);
}