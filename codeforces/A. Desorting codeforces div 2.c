#include <stdio.h>
int main()
{
    int n,l;
    scanf("%d",&n);
    for(l=1;l<=n;l++)
    {
      long long b,c,i,d;
      scanf("%lld",&b);
      long long a[b];
      for(i=0;i<=b-1;i++)
      {
          scanf("%lld",&a[i]);
      }
      c=a[1]-a[0];
      for(i=1;i<=b-1;i++)
      {
          if(c>a[i]-a[i-1]){c=a[i]-a[i-1];}
          if(c<0){printf("0\n");goto m;}
      }
      c=(c/2)+1;
      printf("%lld\n",c);
      m:
        ;
    }
    return 0;
}