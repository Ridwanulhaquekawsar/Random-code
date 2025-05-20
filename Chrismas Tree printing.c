

#include <stdio.h>
int n, space, star, space1,extra;

void print_tree(){
    scanf("%d", &n);
        extra = (n-1)/2;
        for (int i = 1; i <= 6+5+extra; i++)
        {
            if (i<=6+extra)
            {
                space = 6-i+extra; star = 2*i-1; 
                if (n==star) space1 = 6-i+extra;
                for (int j = 1; j <= space; j++) printf(" ");
                for (int j = 1; j <= star; j++)printf("*");
                printf("\n");
            }else
            {
                for (int j = 1; j <= space1; j++) printf(" ");
                for (int j = 1; j <= n; j++) printf("*");
                printf("\n"); 
            }
        } 
    } 

int main(){
    print_tree();
    return 0;
}





















#include <stdio.h>
int n, space, star, space1,extra;

void print_tree(){
    scanf("%d", &n);
    if (n==1)
    {
        for (int i = 1; i <= 6+5; i++)
        {
            if (i<=6)
            {
                space = 6-i; star = 2*i-1; 
                if (n==i) space1 = 6-i;
                for (int j = 1; j <= space; j++) printf(" ");
                for (int j = 1; j <= star; j++)printf("*");
                printf("\n");
            }else
            {
                for (int j = 1; j <= space1; j++) printf(" ");
                for (int j = 1; j <= n; j++) printf("*");
                printf("\n"); 
            }
        }  
    }else
    {
        extra = (n-1)/2;
        for (int i = 1; i <= 6+5+extra; i++)
        {
            if (i<=6+extra)
            {
                space = 6-i+extra; star = 2*i-1; 
                if (n==star) space1 = 6-i+extra;
                for (int j = 1; j <= space; j++) printf(" ");
                for (int j = 1; j <= star; j++)printf("*");
                printf("\n");
            }else
            {
                for (int j = 1; j <= space1; j++) printf(" ");
                for (int j = 1; j <= n; j++) printf("*");
                printf("\n"); 
            }
        } 
    } 
}

int main(){
    print_tree();
    return 0;
}
