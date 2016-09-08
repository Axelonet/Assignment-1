# include <stdio.h>
int main()
{
    int i;
    printf("Enter a number between 1 and 9\n");
    scanf("%d",&i);
    switch (i)
    {
        case 1 :
            printf("One");
            break;
        case 2 :
            printf("Two");
            break;
        case 3 :
            printf("Three");
            break;
        case 4 :
            printf("Four");
            break;
        case 5 :
            printf("Five");
            break;
        case 6 :
            printf("Six");
            break;
        case 7 :
            printf("Seven");
            break;
        case 8 :
            printf("Eight");
            break;
        case 9 :
            printf("Nine");
            break;
        default :
            printf("Only enter numbtween numbers 1 and 9");
    }
    
}