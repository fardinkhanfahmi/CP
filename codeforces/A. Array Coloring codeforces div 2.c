#include <stdio.h>
int main()
{
    long long n,l;
    scanf("%lld",&n);
    for(l=1;l<=n;l++)
    {
      long long b,c,i,j=0,d;
      scanf("%lld",&b);
      long long a[b];
      for(i=0;i<=b-1;i++)
      {
          scanf("%lld",&a[i]);
      }
      m:
      c=0;
      d=a[j];
      for(i=0;i<=b-1;i++)
      {
          if(i!=j){c=c+a[i];}
          if(i==b-1)
          {
              if(c%2==d%2){printf("YES\n");break;}
              if(j<b-1){j=j+1;goto m;}
              if(j==b-1){printf("NO\n");break;}
          }
      }
    }
    return 0;
}
