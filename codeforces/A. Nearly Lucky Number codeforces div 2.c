#include <stdio.h>
#include <string.h>
int main()
{
    char a[1000000];
    scanf("%[^\n]s",&a);
    int b,i,c=0;
    b=strlen(a);
    if(b>=4)
        {
    for(i=0;i<=1000000;i++)
    {
        if(a[i]=='\0'){if(c==4||c==7){printf("YES\n");return 0;}else{printf("NO\n");return 0;}};
        if(a[i]=='4'||a[i]=='7'){c=c+1;continue;}
    }
        }
    else
        {
    printf("NO\n");return 0;};
}
