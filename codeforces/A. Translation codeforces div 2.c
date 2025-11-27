#include <stdio.h>
#include <string.h>
int main()
{
    char a[100],b[101];
    scanf("%[^\n]s",&a);
    getchar();
    scanf("%[^\n]s",&b);
    if(strlen(a)!=strlen(b)){printf("NO\n");return 0;};
    int i,j;
    for(i=0,j=strlen(a)-1;i<=strlen(a);i++,j--)
    {
        if(a[i]=='\0'){printf("YES\n");return 0;};
        if(a[i]!=b[j]){printf("NO\n");return 0;};
    }
}
