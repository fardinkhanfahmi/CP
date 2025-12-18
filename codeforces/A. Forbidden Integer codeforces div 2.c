#include <stdio.h>
int main()
{
    int n;
    scanf("%d",&n);
    while(n--)
    {
        long long a[3],i,j=0;
        for(i=0;i<=2;i++)
        {
            scanf("%lld",&a[i]);
        }
        if(a[1]==1){printf("NO\n");goto m;}
        if(a[2]!=1)
        {
            printf("YES\n");
            printf("%lld\n",a[0]);
            for(i=1;i<=a[0];i++)
        {
            if(i==a[0]){printf("1\n");break;}
            printf("1 ");
        }
        }
        if(a[2]==1)
        {
            if(a[1]==2)
            {
                if(a[0]%2!=0)
                {
                    printf("NO\n");goto m;
                }
                else
                {
                    n:
                    printf("YES\n");
                    o:
            printf("%lld\n",a[0]/2+j);
            for(i=2;i<=a[0];i=i+2)
        {
            if(i==a[0]){if(j!=0){printf("3 ");};printf("2\n");break;}
            printf("2 ");
        }
                goto m;}
            }
            if(a[1]>=3)
            {
               if(a[0]%2==0){goto n;}
               else
               {
                 a[0]=a[0]-3;
                 if(a[0]==0){printf("YES\n1\n3\n");goto m;}
                 else{j=j+1;printf("YES\n");goto o;}
               }
            }
        }
        m:
           ;
    }
}
