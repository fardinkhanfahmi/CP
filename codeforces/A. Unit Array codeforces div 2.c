#include <stdio.h>
int main()
{
    long long n;
    scanf("%lld",&n);
    while(n--)
    {
        long long b,c=0,d=1,i;
        scanf("%lld",&b);
        long long a[b];
        for(i=0;i<=b-1;i++)
        {
            scanf("%lld",&a[i]);
            c=c+a[i];
            d=d*a[i];
        }
        if(c<0 && d==-1)
        {
            c=-1*c;
            if(c%2!=0)
            {
                c=c/2+1;
            }
            else if(c%2==0)
            {
                c=c/2;
            };
            if(c%2==0)
            {
                c=c+1;
            }
        }
        else if(c<0)
        {
            c=-1*c;
            if(c%2!=0)
            {
                c=c/2+1;
            }
            else if(c%2==0)
            {
                c=c/2;
            };
            if(c%2!=0)
            {
                c=c+1;
            };
        }
        else if(d==-1)
        {
            c=1;
        }
        else
        {
            c=0;
        };
        printf("%lld\n",c);
    }
    return 0;
}
