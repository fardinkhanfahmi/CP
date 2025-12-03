#include <stdio.h>
int main()
{
    int n,l;
    scanf("%d",&l);
    for(n=1;n<=l;n++)
    {
        int i,b,c=0;
        scanf("%d",&b);
        b=b-1;
        int a[b];
        for(i=0;i<=b-1;i++)
        {
            scanf("%d",&a[i]);
            c=c+a[i];
        }
        c=-c;
        printf("%d\n",c);
    };
    return 0;
}
