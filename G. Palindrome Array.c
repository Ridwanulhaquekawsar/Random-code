#include <stdio.h>
int main()
{
    int n; scanf("%d", &n);
    int arr[n]; int cparr[n];
    for (int i = 0; i < n; i++)
    {
        scanf("%d", &arr[i]);
        cparr[i] = arr[i];
    }
    int i = 0, j = n-1;
    while (i < j)
    {
        int temp = arr[i];
        arr[i] = arr[j];
        arr[j] = temp;

        i++,j--;
    }
    int palindrome = 1;
    for (int i = 0; i < n; i++)
    {
        if (cparr[i] != arr[i])
        {
            palindrome = 0;
            break;
        }
        
    }
    
    if (palindrome)
    {
        printf("YES");
    }
    else
    {
        printf("NO");
    }
    
    
    return 0;
}
