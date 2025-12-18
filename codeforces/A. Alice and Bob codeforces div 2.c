#include <stdio.h>
int main ()
{
    long long n;
    scanf("%lld",&n);
    while (n--)
    {
        long long b,c,i,j=0,k=0;
        scanf("%lld %lld",&b,&c);
        long long a[b];
        for(i=0;i<=b-1;i++)
        {
            scanf("%lld",&a[i]);
        }
        for(i=0;i<=b-1;i++)
        {
            if(c>a[i])
            {
                j=j+1;
            }
            if(c<a[i])
            {
                k=k+1;
            }
            if(i==b-1)
            {
                if(j>k){printf("%lld\n",c-1);};
                if(j<k){printf("%lld\n",c+1);};
                if(j==k){printf("%lld\n",c-1);};
            }
        }
    }
    return 0;
}
