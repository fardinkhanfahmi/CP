#include <stdio.h>
int main()
{
    long long c,b,i,d=0,e;
    scanf("%lld",&b);
    long long a[b];
    scanf("%lld",&c);
    for(i=0;i<=b-1;i++)
    {
        scanf("%lld",&a[i]);
        if(a[i]<c){d=d+a[i];continue;}
        if(c%a[i]==0){continue;}
        if(a[i]>c)
        {
            e=a[i]/c;
            d=d+(a[i]-e*c);
        }
    }
    printf("%lld\n",d);
    return 0;
}