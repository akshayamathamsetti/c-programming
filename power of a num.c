#include<stdio.h>
#include<math.h>
int main()
{
    long long x,y,M;
    scanf("%lld %lld %lld",&x,&y,&M);
    long long result=(long long)fmod(pow(x,y),M);
    printf("%lld",result);
    return 0;
}
