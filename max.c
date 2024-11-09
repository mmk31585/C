#include <stdio.h>
#include <stdlib.h>

int max(int num1, int num2, int num3)
{
    int result;
    if (num1 < num2)
    {
        if (num2 > num3)
        {
            result = num2;
        }
        else
        {
            result = num3;
        }
    }
    else
    {
        result = num1;
    }
    return result;
}

int main()
{
    int num1, num2, num3;
    printf("please enter your firt number :");
    scanf("%d", &num1);
    printf("please enter your second number :");
    scanf("%d", &num2);
    printf("please enter your third number :");
    scanf("%d", &num3);
    printf("the maximum of your numbers is : %d", max(num1, num2, num3));
    return 0;
}