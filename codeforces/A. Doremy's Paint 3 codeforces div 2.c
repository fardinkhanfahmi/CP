#include <stdio.h>
int main()
{
    int n,l;
    scanf("%d",&n);
    for(l=1;l<=n;l++)
    {
        int b,i,c,d,e=0,f=0,g;
        scanf("%d",&b);
        int a[b];
        for(i=0;i<=b-1;i++)
        {
            scanf("%d",&a[i]);
        }
        if(b<=2){printf("YES\n");continue;};
        c=a[0];
        for(i=0;i<=b-1;i++)
        {
           if(c!=a[i] && i!=0){d=a[i]; goto m;};
        }
        printf("YES\n");
        goto n;
        m:
        for(i=0;i<=b-1;i++)
        {
           if(a[i]==c){e=e+1;};
           if(a[i]==d){f=f+1;};
        }
        g=b/2;
        if(b%2==0 && e==f && e==b/2){printf("YES\n");goto n;}
        else if(b%2==0){printf("NO\n");}
        else if(b%2!=0 && ((e==g+1 && f==g)||(e==g && f==g+1))){printf("YES\n");}
        else{printf("NO\n");};
        n:
            ;
    };
    return 0;
}
