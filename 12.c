# include <stdio.h>
int main()
{
    int i,j,k,a=5;
    for (i=1;i<=5;i++)
    {
        for (j=1;j<=i;j++)
        {
            printf(" ");
        }
        for (k=5;k>=i;k--)
        {
            printf("%d ",a);
        }
        a--;
        printf("\n");
    }
}