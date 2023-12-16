#include <stdio.h>

int main()
{
    int x = 3;
    int* ptr = &x;
    // scanf("%d", &x);
    printf("x is %d\n", x);
    printf("address of x is %p\n", ptr);
    return 0;
}