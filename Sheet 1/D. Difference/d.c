#include<stdio.h>
int main()
{
    long long a,b,c,d;
 
    scanf("%lld", &a);
    scanf("%lld", &b);
    scanf("%lld", &c);
    scanf("%lld", &d);
 
    long long e = (a * b) - (c * d);
 
    printf("Difference = %lld", e);
 
    return 0;
}