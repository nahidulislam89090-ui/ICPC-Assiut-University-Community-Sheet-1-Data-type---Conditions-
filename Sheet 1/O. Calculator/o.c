#include<stdio.h>
int main()
{
    int a,b,result;
    char x;
 
    scanf("%d %c %d", &a, &x, &b);
 
    switch(x)
 
    {
    case'+':
        result=a+b;
        printf("%d", result);
        break;
 
    case'-':
        result=a-b;
        printf("%d", result);
        break;
 
    case'*':
        result=a*b;
        printf("%d", result);
        break;
 
    case'/':
        result=a/b;
        printf("%d", result);
        break;
    }
 
    return 0;
}
 