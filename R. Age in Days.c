#include <stdio.h>
int main()
{
    int n; scanf("%d", &n);
    if (n >= 365)
    {
        printf("%d years\n", n/365);
        n-=365*(n/365);
        if (n >= 30)
        {
            printf("%d months\n", n/30);
            n-=30*(n/30);
            printf("%d days", n);
        }
        else
       {
            printf("0 months\n");
            printf("%d days", n);
       }

    }
    else if (n >= 30)
    {
        printf("0 years\n");
        printf("%d months\n", n/30);
        n-=30*(n/30);
        printf("%d days", n);
    }
    else
    {
        printf("0 years\n");
        printf("0 months\n");
        printf("%d days", n);

    }

     
    return 0;
}


Second way(optimised code):   

#include <stdio.h>
int main()
{
    int n; scanf("%d", &n);
    int years = n/365;
    n %= 365;
    int month = n/30;
    n %= 30;

    printf("%d years\n", years);
    printf("%d months\n", month);
    printf("%d days", n);

    return 0;
}

