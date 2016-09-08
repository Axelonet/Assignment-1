#include <stdio.h>

int main()
{
    int n;
    n=0;
    add : n++;
    printf("%d ",n);
    if (n< 100)
        goto add;
    return 0;
}