#include <stdio.h>

int main(void)
{

    float GreatNum, num = 1;

    while (num != 0)
    {

        printf("Enter a number:");
        scanf("%f", &num);

        if (num > GreatNum)
        {

            GreatNum = num;
        }
    }

    printf("The largest number entered was: %.2f", GreatNum);

    return 0;
}