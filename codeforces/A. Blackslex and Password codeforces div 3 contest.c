#include <stdio.h>
int main()
{
    long long n;
    scanf("%lld",&n);
    while(n--)
    {
        long long a[2];
        scanf("%lld %lld",&a[0],&a[1]);
        printf("%lld\n",a[0]*a[1]+1);
    }
    return 0;
}
