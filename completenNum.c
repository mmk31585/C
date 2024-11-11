#include <stdio.h>
#include <stdlib.h>
#include <conio.h>

int main()
{
    int i = 1;
    int sum = 0;
    int number;
    char result[30];
    printf("enter your number: ");
    scanf("%d", &number);
    while (i <= number / 2)
    {

        if (number % i == 0)
        {
            sum = sum + i;
            i++;
        }
        else
        {
            i++;
        }
    }
    if (number == sum)
    {
        printf("the number is complete!!");
    }
    else
    {
        printf("the number is not complete !!");
    }
    getch();
}