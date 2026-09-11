#include<stdio.h>
int main()
{
    int x,y, sum, sub, mul;
    int result;
    char c, q;

    scanf("%d %c %d %c %d", &x, &c, &y, &q, &result);

    sum=x+y;
    sub=x-y;
    mul=x*y;

    if(c=='+')
    {
        if(x+y==result)
        {
            printf("Yes");
        }
        else
        {
            printf("%d", sum);
        }
    }
    else if(c=='-')
    {
        if(x-y==result)
        {
            printf("Yes");
        }
        else
        {
            printf("%d", sub);
        }
    }
    else if(c=='*')
    {
        if(x*y==result)
        {
            printf("Yes");
        }
        else
        {
            printf("%d", mul);
        }
    }

    return 0;
}
