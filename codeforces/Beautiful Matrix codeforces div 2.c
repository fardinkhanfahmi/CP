#include<stdio.h>
int main()
{
    int a[5][5],i,j=0,b,c;
    m:
    for(i=0;i<=4;i++)
    {
        scanf("%d",&a[j][i]);
    }
    if(j<4){j=j+1;goto m;};
    j=0;
    n:
    for(i=0;i<=4;i++)
    {
        if(a[j][i]==1){goto o;};
    }
    if(j<4){j=j+1;goto n;};
    o:
       b=i-2;
       c=j-2;
       if(b<0){b=-1*b;};
       if(c<0){c=-1*c;};
       b=b+c;
       printf("%d\n",b);
    return 0;
}
