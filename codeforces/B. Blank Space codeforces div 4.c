#include <stdio.h>
int main()
{
    long long n;
    scanf("%lld",&n);
    while(n--)
    {
        long long b,i,c=0,d=0;
        scanf("%lld",&b);
        long long a[b];
        for(i=0;i<=b-1;i++)
        {
            scanf("%lld",&a[i]);
            if(a[i]==0){c=c+1;}
            else
            {
                if(c>=d){d=c;}
                c=0;
            }
        }
        if(c>=d){d=c;}
        printf("%lld\n",d);
    }
    return 0;
}
