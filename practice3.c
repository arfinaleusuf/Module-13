#include<stdio.h>
int main()
{
    int n;
    scanf("%d",&n);
    int space = 1;
    for(int i = n; i>=1; i--)
    {
        for(int j = i; j>=1; j--)
        {
            printf("*");
        }
        printf("\n");
        for(int s = 1; s<=space; s++)
        {
            printf(" ");
        }
        space++;
    }
    return 0;
}