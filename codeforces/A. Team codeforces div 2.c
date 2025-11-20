#include<stdio.h>
int main()
{
    int a[3],i,j,k,b,c=0;
    scanf("%d",&i);
    for(j=1;j<=i;j++)
    {
        for(k=0;k<=2;k++){scanf("%d",&a[k]);}b=a[0]+a[1]+a[2];if(b>1){c=c+1;}
    }
    printf("%d\n",c);
    return 0;
}
