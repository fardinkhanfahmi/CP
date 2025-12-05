#include <stdio.h>
int main()
{
    int b,i;
    double d,c=0.0;
    scanf("%d",&b);
    int a[b];
    for(i=0;i<=b-1;i++)
    {
        scanf("%d",&a[i]);
        c=c+a[i];
    }
    d=c/b;
    printf("%.12f\n",d);
    return 0;
}
