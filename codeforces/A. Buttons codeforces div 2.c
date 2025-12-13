#include <stdio.h>
int main()
{
    int n,l;
    scanf("%d",&n);
    for(l=1;l<=n;l++)
    {
        int a[3],i,j=0;
        for(i=0;i<=2;i++)
        {
            scanf("%d",&a[i]);
            if(a[2]%2!=0 && i==2)
            {
                if(a[0]==a[1]){printf("First\n");}
                if(a[0]>a[1]){printf("First\n");}
                if(a[0]<a[1]){printf("Second\n");}
            }
            if(a[2]%2==0 && i==2)
            {
                if(a[0]==a[1]){printf("Second\n");}
                if(a[0]>a[1]){printf("First\n");}
                if(a[0]<a[1]){printf("Second\n");}
            }
        }
    }
    return 0;
}
