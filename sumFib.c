#include <stdio.h>
#include <conio.h>

int main()
{
    int f0 = 0, f1 = 1, f2 = 0, i = 2;
    int sum = 1;
    int n = 0;
    printf("enter your number: ");
    scanf("%d", &n);
    while (i <= n)
    {
        f2 = f1 + f0;
        sum = sum + f2;
        f0 = f1;
        f1 = f2;
        i = i + 1;
    }
    printf("the sum of fib number is %d", sum);
    return 0;
    getch();
}