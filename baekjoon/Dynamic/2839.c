#include <stdio.h>

int main(void)
{
    int num;
    int dp[1000001] = {
        0,
    };
    dp[0] = 0;
    scanf("%d", &num);

    for (int i = 2; i <= num; i++)
    {
        dp[i] = dp[i - 1] + 1;
        if (i % 2 == 0)
        {
            if (dp[i] > dp[i / 2] + 1)
            {
                dp[i] = dp[i / 2] + 1;
            }
        }
        if (i % 3 == 0)
        {
            if (dp[i] > dp[i / 3] + 1)
            {
                dp[i] = dp[i / 3] + 1;
            }
        }
    }
    printf("%d", dp[num]);
    return 0;
}