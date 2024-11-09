#include <stdio.h>
#include <math.h>

int main()
{
    int x, z;
    printf("enter your number1 :");
    scanf("%d", &x);
    printf("enter your number2 :");
    scanf("%d", &z);
    int num1 = x;
    int num2 = z;
    printf("sum : %d \n", num1 + num2);       // sum the numbers
    printf("multiple : %d \n", num1 * num2);  // multiple the numbers
    printf("power : %f \n", pow(num1, num2)); // power the numbers
    return 0;
}