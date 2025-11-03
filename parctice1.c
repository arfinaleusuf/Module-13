#include<stdio.h>
int main()
{
    int n;
    scanf("%d",&n);
    int space = n-1;
    for(int i = 1; i<=n; i++)
    {
        for(int s = space; s>=1; s--)
        {
            printf(" ");
        }
        for(int j = 1; j<=i; j++)
        {
            printf("* ");
        }
        space--;
        printf("\n");
    }
    return 0;
}