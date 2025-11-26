#include <stdio.h>
#include <string.h>
int main()
{
    int b;
    scanf("%d",&b);
    getchar();
    char a[b];
    scanf("%[^\n]s",&a);
    int c=0,d=0;
    m:
        a[c];
    if(a[c]==a[c+1]){d=d+1;};
    if(c<b-2){c=c+1;goto m;};
    printf("%d\n",d);
    return 0;
}
