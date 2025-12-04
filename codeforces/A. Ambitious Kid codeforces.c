#include <stdio.h>
int main()
{
        int b,i,c;
        scanf("%d",&b);
        int a[b];
        for(i=0;i<=b-1;i++)
        {
            scanf("%d",&a[i]);
            if(a[i]<0){a[i]=-(a[i]);};
            if(i==0){c=a[i];continue;};
            if(c>a[i]){c=a[i];};
        }
        for(i=0;i>=0;i++)
        {
            if(c==0){break;}
            else{c=c-1;};
        }
        printf("%d\n",i);
        return 0;
}
