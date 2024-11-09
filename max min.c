#include <stdio.h>

int main()
{
    int a, b;
    printf("plese enter your fist num : ");
    scanf("%d", &a);
    printf("plese enter your second num : ");
    scanf("%d", &b);
    int x = (a < b) ? b = "max", a = "min" : a = "max", b = "min";
    printf("%d", x);
    return 0;
}