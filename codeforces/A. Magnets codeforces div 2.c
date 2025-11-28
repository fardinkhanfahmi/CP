#include <stdio.h>
int main()
{
    int a,n,i,b,c=1;
    scanf("%d",&n);
    for(i=1;i<=n;i++)
    {
       scanf("%d",&a);
       if(i==1){b=a;};
       if(a!=b){c=c+1;b=a;};
    }
    printf("%d\n",c);
    return 0;
}
