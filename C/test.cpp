#include <stdio.h>
#include <string.h>
#include <math.h>
#include <stdlib.h>

int main()
{

    int n;
    scanf("%d", &n);
    int length = n * 2 - 1;
    int a[length][length];
    int cur = n;

    // Complete the code to print the pattern.
    while (cur)
    {
        for (int i = length; i >= n * 2 - length; i--)
        {
            for (int j = length; j >= n * 2 - length; j--)
            {
                if (i == length || j == length || i == n * 2 - length || j == n * 2 - length)
                {
                    a[i - 1][j - 1] = cur;
                }
                else
                {
                    a[i - 1][j - 1] = 0;
                }
            }
        }
        cur--;
        length--;
    }

    for (int i = 0; i < n * 2 - 1; i++)
    {
        for (int j = 0; j < n * 2 - 1; j++)
        {
            printf("%d ", a[i][j]);
        }
        printf("\n");
    }

    return 0;
}
