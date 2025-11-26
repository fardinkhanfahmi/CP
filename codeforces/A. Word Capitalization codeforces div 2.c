#include <stdio.h>
#include <string.h>
int main()
{
    char a[1000];
    int b,i;
    scanf("%[^\n]s",&a);
    b=strlen(a);
    for(i=0;i<=b;i++)
    {
        if(a[i]=='\0') break;
        if(a[i]>='a'&&a[i]<='z'&&i==0)a[i]=a[i]-32;;
    }
    printf("%s\n",a);
    return 0;
}
