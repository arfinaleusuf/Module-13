#include <stdio.h>
int main()
{
    int n = 0;
    scanf("%d", &n);
    int array[n];
    for (int i = 0; i < n; i++)
    {
        scanf("%d", &array[i]);
    }
    int x;
    scanf("%d", &x);
    int flag = 0;
    for (int i = 0; i < n - 1; i++)
    {
        for (int j = i + 1; j < n; j++)
        {
            if (array[i] + array[j] == x)
            {
                flag++;
            }
        }
    }

    if (flag != 0)
    {
        printf("YES");
    }
    else
    {
        printf("NO");
    }

    return 0;
}