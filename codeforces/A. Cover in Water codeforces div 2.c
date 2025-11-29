#include <stdio.h>
#include <string.h>
int main()
{
    int n,l;
    scanf("%d",&n);
    for(l=1;l<=n;l++)
    {
        int b,i,c=0,d=0;
        scanf("%d",&b);
        char a[b];
        getchar();
        scanf("%[^\n]s",&a);
       for(i=0;i<=b-1;i++)
       {
          if(a[i]==a[i+1] && a[i+1]==a[i+2] && a[i]=='.'){d=2;break;};
          if(a[i]=='.'){c=c+1;};
       }
       if(d==2){printf("%d\n",d);continue;}
       else{printf("%d\n",c);continue;};
       };
    return 0;
}
