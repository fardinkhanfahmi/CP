#include <stdio.h>
int main()
{
    int b,i,c=0,a[2],d;
    scanf("%d",&b);
    for(i=1;i<=b;i++)
    {
        scanf("%d %d",&a[0],&a[1]);
        c=c-a[0];
        c=c+a[1];
        if(i==1){d=c;continue;};
        if(c>=d){d=c;};
    }
    printf("%d\n",d);
    return 0;
}
