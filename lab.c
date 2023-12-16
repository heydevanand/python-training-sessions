#include <stdio.h>

int main()
{
    int y;
    scanf("%d", &y);
    int *x = &y;
    printf("%d", x);
    return 0;
}