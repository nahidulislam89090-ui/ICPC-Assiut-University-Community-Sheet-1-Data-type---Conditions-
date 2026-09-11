#include<stdio.h>
#include<math.h>

int main()
{
    float n, y;
    
    scanf("%f", &n);

    int x = ceil(n);

    if(n-x == 0)
    {
        printf("int %d", x);
    }
    else if(n-x!=0)
    {
        printf("float %d %.3f", (int)n, n-(int)n);
    }

    return 0;
}