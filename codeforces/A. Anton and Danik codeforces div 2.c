#include <stdio.h>
#include <string.h>
int main()
{
    int b,i,c=0,d=0;
    scanf("%d",&b);
    getchar();
    char a[b];
    scanf("%[^\n]s",&a);
    for(i=0;i<=b;i++)
    {
        if(a[i]=='\0'){break;};
        if(a[i]=='A'){c=c+1;};
        if(a[i]=='D'){d=d+1;};
    }
    if(c==d){printf("Friendship\n");return 0;};
    if(c>d){printf("Anton\n");return 0;};
    if(c<d){printf("Danik\n");return 0;};
}
