#include <stdio.h>
int main()
{
    int a,b;
    for (a=1;a<=100;a++)
    {
        if (a % 7 == 0)
        {continue;
        }
        printf("%d ",a);
    }
    return 0;
}