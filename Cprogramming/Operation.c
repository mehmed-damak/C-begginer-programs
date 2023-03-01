#include <stdio.h>
#include <stdlib.h>
int main()
{
    int fnum,snum,choice,remainder,answer;
    printf("give me the first number");
    scanf("%d",&fnum);
    printf("give me the second number");
    scanf("%d",&snum);
    printf("What operatiom would you like to run, pick a number\n1-addition\n2-subtraction\n3-multiplication\n4-division\n");
    scanf("%d",&choice);
    while(choice<1|choice>4)
    {
        printf("try again");
        scanf("%d",&choice);
    }
    switch(choice)
    {
        case(1):
            answer=fnum+snum;
            printf("%d",answer);
            break;
        case(2):
            answer=fnum-snum;
            printf("%d",answer);
            break;
        case(3):
            answer=fnum*snum;
            printf("%d",answer);
            break;
        case(4):
            answer=fnum/snum;
            remainder=fnum%snum;
            printf("%d remainder %d",answer,remainder);
            break;
    }
    return 0;
    
}