#include <stdio.h>
int main()
{
    int a,b,c,d=0,i;
    scanf("%d %d %d",&a,&b,&c);
    for(i=1;i<=c;i++)
    {
        d=d+a*i;
    }
    if(d-b<0){printf("0");return 0;};
    printf("%d",d-b);
    return 0;
}
