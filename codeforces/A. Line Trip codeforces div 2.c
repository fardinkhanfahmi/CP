#include <stdio.h>
int main()
{
    int n,l;
    scanf("%d",&n);
    for(l=1;l<=n;l++)
    {
        int b;
        scanf("%d",&b);
        int a[b],i,c,d;
        scanf("%d",&c);
        for(i=0;i<=b-1;i++)
       {
          scanf("%d",&a[i]);
       }
       d=a[0];
       for(i=0;i<=b-2;i++)
       {
          if(d<a[i+1]-a[i]){d=a[i+1]-a[i];};
       }
       if(d<(2*(c-a[b-1]))){d=(2*(c-a[b-1]));};
       printf("%d\n",d);
       };
    return 0;
}
