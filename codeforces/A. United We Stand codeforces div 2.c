#include <stdio.h>
int main()
{
    int l,n;
    scanf("%d",&n);
    for(l=1;l<=n;l++)
    {
        int b,c,i,d,e=1;
        scanf("%d",&b);
        int a[b];
        for(i=0;i<=b-1;i++)
        {
            scanf("%d",&a[i]);
        }
        for(i=0;i<=b-1;i++)
        {
            if(i==0){c=a[i];d=i;continue;}
            if(c>a[i]){c=a[i];d=i;}
        }
        for(i=0;i<=b-1;i++)
        {
            if(c==a[i] && i!=d){e=e+1;}
            if(e==b){goto m;};
        }
        printf("%d %d\n",e,b-e);
        for(i=1;i<=e;i++)
        {
            printf("%d ",c);
        }
        printf("\n");
        for(i=0;i<=b-1;i++)
        {
            if(a[i]==c){continue;}
            printf("%d ",a[i]);
        }
        printf("\n");
        goto n;
        m:
            printf("-1\n");
            n:
                ;
    }
    return 0;
}
