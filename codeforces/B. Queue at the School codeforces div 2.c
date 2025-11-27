#include <stdio.h>
#include <string.h>
int main()
{
    int b,c,i,j,d;
    scanf("%d",&b);
    scanf("%d",&c);
    getchar();
    char a[b];
    scanf("%[^\n]s",&a);
    for(i=1;i<=c;i++)
    {
        for(j=0;j<=b-1;j=j+2)
        {
            if(a[j]=='B'&&a[j+1]=='G'){d=a[j+1];a[j+1]=a[j];a[j]=d;}
            else{j=j-1;};
        }
    }
    printf("%s\n",a);
    return 0;
}
