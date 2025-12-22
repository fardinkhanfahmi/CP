#include <stdio.h>
int main()
{
    long long n;
    scanf("%lld",&n);
    while(n--)
    {
        long long a[2];
        scanf("%lld %lld",&a[0],&a[1]);
        if(a[0]==1 || a[1]==1){printf("YES\n");continue;}
        if(a[0]%2==0){printf("YES\n");continue;}
        if((a[0]-a[1])%2==0){printf("YES\n");continue;}
        else{printf("NO\n");}
    }
    return 0;
}
