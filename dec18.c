#include <stdio.h>

int main()
{
    int i;
    int x;
    printf("What's the number?\n");
    scanf("%d",&x);
    for (i = 1; i <= 10; i++)
    {
        printf("%d x %d = %d\n", x, i, x * i);
    }
}