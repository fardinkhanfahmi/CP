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
       if(b==1){printf("YES\n");}
       else{
       for(i=0;i<=b-2;i++)
       {
          if(a[i]>a[i+1]){if(c>=2){printf("YES\n");}else{printf("NO\n");};break;};
          if(i==b-2){printf("YES\n");};
       }
       };
    }
    return 0;
}
