#include <stdio.h>
int main()
{
    int j,i,b,c,d=0;
    scanf("%d",&j);
    for(i=1;i<=j;i++)
    {
        scanf("%d",&b);
        int a[b];
        for(c=0;c<=b-1;c++)
        {
            scanf("%d",&a[c]);
        }
        m:
        for(c=0;c<=b-1;c++)
        {
            if(d==a[c]){d=d+1;goto m;};
        }
        printf("%d\n",d);
        d=0;
    }
    return 0;
}
