#include <stdio.h>
int main()
{
    int a[4],b,c,i;
    scanf("%d",&b);
    n:
    c=0;
    b=b+1;
    a[0]=b%10;
    a[1]=((b%100)-(b%10))/10;
    a[2]=((b%1000)-(b%100))/100;
    a[3]=b/1000;
    m:
    for(i=0;i<=3;i++)
    {
        if(a[c]==a[i] && c!=i){goto n;};
    }
    if(c<3){c=c+1;goto m;};
    printf("%d\n",b);
    return 0;
}
