#include <stdio.h>
int main()
{
    int n,l;
    scanf("%d",&n);
    for(l=1;l<=n;l++)
    {
        int b,c,i;
        scanf("%d %d",&b,&c);
        int a[b];
        for(i=0;i<=b-1;i++)
        {
            scanf("%d",&a[i]);
        }
        for(i=0;i<=b-1;i++)
        {
            if(c==a[i]){printf("YES\n");break;};
            if(i==b-1){printf("NO\n");break;};
        }
    }
    return 0;
}
