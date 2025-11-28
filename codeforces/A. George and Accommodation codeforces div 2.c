#include <stdio.h>
int main()
{
    int a[2],n,b=0,i;
    scanf("%d",&n);
    for(i=1;i<=n;i++)
    {
        scanf("%d %d",&a[0],&a[1]);
        if(a[1]-a[0]>=2){b=b+1;}
    }
    printf("%d\n",b);
    return 0;
}
