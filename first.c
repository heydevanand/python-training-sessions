#include <stdio.h>

int main()
{
    int x;
    int *ptr = &x;
    scanf("%d\n", &x);
    printf("%p", ptr);
    return 0;
}