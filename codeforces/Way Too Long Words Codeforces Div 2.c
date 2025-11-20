#include <stdio.h>
#include <string.h>
int main()
{
    int i,j;
    scanf("%d",&j);
    for(i=1;i<=j;i++)
    {
    int a,b,d[1];
    char e[100];
    getchar();
    scanf("%[^\n]s",&e);
    b=strlen(e);
    if(b<=10){printf("%s\n",e);}
    else
    {
        d[0]=b-2;
        if(b>10){e[1]=e[b-1];};
        printf("%c%d%c\n",e[0],d[0],e[1]);};
}
    return 0;
}
