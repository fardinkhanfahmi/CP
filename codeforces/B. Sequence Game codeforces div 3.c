#include <stdio.h>
int main()
{
    int n,l;
    scanf("%d",&n);
    for(l=1;l<=n;l++)
    {
        int b,i,j=0,c;
        scanf("%d",&b);
        c=2*b-1;
        int a[c];
        for(i=0;i<=c-1;i=i+2)
        {
            scanf("%d",&a[i]);
        }
        for(i=0;i<=c-1;i=i+2)
        {
            if(a[i]>a[i+2]){a[i+1]=1;}
            else{a[i+1]=0;};
        }
        for(i=0;i<=c-1;i++)
        {
            if(a[i]!=0){j=j+1;};
        }
        printf("%d\n",j);
        for(i=0;i<=c-1;i++)
        {
            if(a[i]!=0){printf("%d ",a[i]);}
            if(i==c-1){printf("\n");}
        }
    }
    return 0;
}
