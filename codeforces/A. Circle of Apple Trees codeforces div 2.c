#include <stdio.h>
int main()
{
    int e,f;
    scanf("%d",&e);
    for(f=1;f<=e;f++){
            int a[110],b,c=0,i,j,d=0;
    scanf("%d",&b);
    for(i=0;i<=b-1;i++)
    {
        scanf("%d",&a[i]);
    }
    m:
    j=a[c];
    for(i=0;i<=b-1;i++)
    {
        if(j==a[i]&&c!=i){a[i]=-1;};
    }
    if(c<b-1){c=c+1;goto m;};
    for(i=0;i<=b-1;i++)
    {
        if(a[i]>=1){d=d+1;};
    }
    printf("%d\n",d);
    }
    return 0;
}
