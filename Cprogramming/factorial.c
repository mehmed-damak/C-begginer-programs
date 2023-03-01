#include <stdio.h>
#include <stdlib.h>
#include <stdbool.h>
#include <unistd.h>

int main()
{
    int i;
    int fac = 1;
    int ans;
    int multi;
    printf("give me a number");
    scanf("%d", &fac);
    printf("here is your number:%d\n", fac);
    for (i = 1; i < fac; i++)
    {
        multi = fac*i;
        ans = ans + multi;


    }
    printf("Your answer is %d", ans);
}
