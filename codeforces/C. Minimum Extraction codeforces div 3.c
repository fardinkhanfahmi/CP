#include <stdio.h>
int main()
{
    long long l;
    scanf("%lld",&l);
    while(l--)
    {
    long long b,c=0,d,i,e,j;
    d=c;
    scanf("%lld",&b);
    if(b==1){scanf("%lld",&b);printf("%lld\n",b);continue;}
    long long a[b];
    for(i=0; i<=b-1; i++)
    {
        scanf("%lld",&a[i]);
        m:
        for(j=0; j<=i-1; j++)
        {
            if(a[j]>a[j+1]){e=a[j];a[j]=a[j+1];a[j+1]=e;c=c+1;}
        }
        if(d!=c){d=c;goto m;};
    }
    c=a[0];
    for(i=0; i<=b-2; i++)
    {
        if(a[i+1]-a[i]>=c){c=a[i+1]-a[i];}
    }
    printf("%lld\n",c);
    }
    return 0;
}
