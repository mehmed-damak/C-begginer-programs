#include<stdio.h>
#include<stdlib.h>
int main()
{
    int number, workingNumber, sum=0, j;
    printf("enter the number:");    
    scanf("%d",&number);   
    workingNumber = number;
    while(number > 0)
    {
        j = number%10;
        sum = (sum*10)+j;
        number = number/10;
    }
    if (workingNumber == sum)
    {
        printf("is palindrome");
        
    } 
    else 
    {
    printf("is not palindrome");
    printf("%d", sum);
    }
}