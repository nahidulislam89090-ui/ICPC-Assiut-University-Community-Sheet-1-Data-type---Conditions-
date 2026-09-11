#include<stdio.h>
int main()
{
    int n, i, r, x;
 
    scanf("%d", &n);
 
    i=n;
 
    while(i!=0)
    {
        r=i%10;
        i=i/10;
    }
 
    if(r%2==0)
    {
        printf("EVEN");
    }
    else
    {
        printf("ODD");
    }
 
    return 0;
}