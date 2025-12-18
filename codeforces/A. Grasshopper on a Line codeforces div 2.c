#include <stdio.h>
int main()
{
    long long n;
    scanf("%lld",&n);
    while (n--)
    {
        long long a,b;
        scanf("%lld %lld",&a,&b);
        if(a%b!=0)
        {
            printf("1\n");
            printf("%lld\n",a);
        }
        else
        {
            printf("2\n");
            printf("%lld 1\n",a-1);
        };
    }
    return 0;
}
