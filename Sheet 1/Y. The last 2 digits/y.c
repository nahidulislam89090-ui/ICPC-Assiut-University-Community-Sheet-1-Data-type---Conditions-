#include<stdio.h>
int main()
{
    long long a, b, c, d, n, mul=1;
 
    scanf("%lld %lld %lld %lld", &a, &b, &c, &d);
 
    mul=((a%100)*(b%100)*(c%100)*(d%100));
 
    n=mul%100;
 
    if(n==0)
    {
        printf("00");
    }
   else if(n<10)
   {
    printf("0%lld", n);
   }
    else
    {
        printf("%lld", n);
    }
 
    return 0;
}