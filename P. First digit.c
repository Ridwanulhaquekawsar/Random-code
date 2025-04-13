#include <stdio.h>
int main()
{
    int X;
    scanf("%d",&X);
    
    int temp;
    while (X != 0 )
    {
        temp = X/10;
        if (temp == 0)
        {
            if (X % 2 == 0)
            {
                printf("EVEN");
                break;
            }
            else
            {
                printf("ODD");
                break;
            } 
            
        }
        else
        {
            X/=10;
        }
         
    }
    
    return 0;
}

