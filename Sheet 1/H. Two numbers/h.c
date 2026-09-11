#include<stdio.h>
#include<math.h>
int main()
{
    float A,B, result;
 
    scanf("%f %f", &A,&B);
 
    result = A/B;
 
    printf("floor %0.f / %0.f = %0.f\n",A,B, floor(result));
    printf("ceil %0.f / %0.f = %0.f\n",A,B, ceil(result));
     printf("round %0.f / %0.f = %0.f\n",A,B, round(result));
 
    return 0;
}