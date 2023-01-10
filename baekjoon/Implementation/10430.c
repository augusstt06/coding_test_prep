#include <stdio.h>

int main(void)
{
    int num1, num2, num3;
    int result1, result2, result3, result4;
    scanf("%d %d %d", &num1, &num2, &num3);

    result1 = (num1 + num2) % num3;
    result2 = ((num1 % num3) + (num2 % num3)) % num3;
    result3 = (num1 * num2) % num3;
    result4 = ((num1 % num3) * (num2 % num3)) % num3;

    printf("%d\n%d\n%d\n%d\n", result1, result2, result3, result4);
    return 0;
}