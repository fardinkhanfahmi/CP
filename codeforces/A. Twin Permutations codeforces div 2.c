#include <stdio.h>
int main()
{
    long long n;
    scanf("%lld",&n);
    while(n--)
    {
        long long b;
        scanf("%lld",&b);
        long long a[b],i;
        for(i=0;i<=b-1;i++)
        {
            scanf("%lld",&a[i]);
        }
        for(i=0;i<=b-1;i++)
        {
            if(i==b-1)
            {
                printf("%lld\n",b+1-a[i]);
                break;
            }
            printf("%lld ",b+1-a[i]);
        }
    }
    return 0;
}
