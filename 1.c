# include <stdio.h>

int main()
{
    int b,c=0;
    long unsigned int a;
    for (a=1;a<=10000;a++)
    {
        c=0;
        for (b=1;b<a;b++)
        {
            if (a % b == 0)
            {
                c += b;
            }
            
        }
        if ( c == a)
        {
            printf("%lu is a perfect number \n",a);
        }
       
    }
    
    return 0;
    
}