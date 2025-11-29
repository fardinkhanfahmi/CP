#include <stdio.h>
int main()
{
    int n,l;
    scanf("%d",&n);
    for(l=1;l<=n;l++)
    {
        int b,i,d=0;
        scanf("%d",&b);
        int a[b];
        for(i=0;i<=b-1;i++)
        {
            scanf("%d",&a[i]);
        }
        if(a[0]!=1){printf("NO\n");continue;};
        for(i=0;i<=b-1;i++)
        {
           if(a[i]>b){printf("NO\n");goto m;};
        }
        n:
        for(i=0;i<=b-1;i++)
        {
           if(a[i]==a[d] && i!=d){printf("NO\n");goto m;};
        }
        if(d<b-1){d=d+1;goto n;};
        printf("YES\n");
        m:
            ;
    };
    return 0;
}
