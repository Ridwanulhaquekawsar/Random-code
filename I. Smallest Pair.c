#include <stdio.h>
int main()
{
    int t; scanf("%d", &t);
    while (t--)
    {
        int n; scanf("%d", &n);

        int a[n+1];
        for (int i = 1; i <= n; i++)
        {
            scanf("%d", &a[i]);
        }

        int min = 10000000; int sum;
        for (int i = 1; i < n; i++)
        {
            for (int j = i+1; j <= n; j++)
            {
                sum = a[i] + a[j] + j - i;
                if (sum < min)
                {
                    min = sum;
                }
                
            }
            
        }
        printf("%d\n", min);
    }
    
    
    return 0;
}
