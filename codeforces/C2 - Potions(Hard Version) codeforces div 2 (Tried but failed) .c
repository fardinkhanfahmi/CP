#include <stdio.h>
int main()
{
    int b,c=0,d,e,f,g=0,h=0,l,i,j,k,p,q=0,r,s=0;
    scanf("%d",&b);
    int a[b];
    for(i=0; i<=b-1; i++)
    {
        scanf("%d",&a[i]);
        c=c+a[i];
    }
    goto o;
    n:
    if(c<0)
    {
       d=a[0];
       for(i=0; i<=b-1; i++)
    {
        if(d<a[i]){d=d;};
        if(d>a[i]){d=a[i];e=i;};
        if(d==a[i]){d=d;if(i<e){e=i;};};
    }
     for(i=0,j=0;i<=b-1;i++,j++)
     {
         if(i==e){j=j-1;continue;}
         a[j]=a[i];
     }
     goto m;
    };
    a[b];
    for(i=0;i<=b-1;i++)
    {
        l=g;
        g=g+a[i];
        if(g<0&& i==0){g=0;continue;};
        if(g<0){g=l;continue;};
        l=g;
        h=h+1;
    }
    if(s>h){printf("%d",s);};
    if(s<h){printf("%d",h);};
    return 0;
    m:
        b=b-1;
        c=0;
        if(b==0){printf("%d",c); return 0;};
        for(i=0; i<=b-1; i++)
    {
        c=c+a[i];
    }
       goto n;
       o:
           for(p=0;p<=b-1;p++)
    {
        r=q;
        q=q+a[p];
        if(q<0&& p==0){q=0;continue;};
        if(q<0){q=r;continue;};
        r=q;
        s=s+1;
    }
    goto n;
}
