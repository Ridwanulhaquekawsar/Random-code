#include <stdio.h>
#include <math.h>
int main()
{
    int a, b; scanf("%d %d", &a, &b);
    printf("floor %d / %d = %d\n", a, b, a/b);
    float c = a*1.0;
    if (c/b > a/b) printf("ceil %d / %d = %d\n", a, b, a/b+1);
    else printf("ceil %d / %d = %d\n", a, b, a/b);
    if (c/b - a/b < 0.5) printf("round %d / %d = %d\n", a, b, a/b);
    else printf("round %d / %d = %d\n", a, b, a/b+1);


    return 0;
}
