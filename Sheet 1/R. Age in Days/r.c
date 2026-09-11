#include<stdio.h>
int main()
{
    long long year, month, day,n;

    scanf("%lld", &n);

    year = n/365;

    n=n%365;

    month = n/30;

    n=n%30;

    day=n;

    printf("%lld years\n", year);
    printf("%lld months\n", month);
    printf("%lld days\n", day);

    return 0;
}
