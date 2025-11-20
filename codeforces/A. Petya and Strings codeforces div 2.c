#include<stdio.h>
#include<string.h>
int main()
{
    char a[110],b[110];
    scanf("%[^\n]s",&a);
    getchar();
    scanf("%[^\n]s",&b);
    getchar();
    int c,d,j,e=0,f=0;
    c=strlen(a);
    d=strlen(b);
    if(c>d){c=c;};
    if(c<d){c=d;};
    if(c==d){c=c;};
    for(j=0;j<=c;j++)
    {
        if(a[j]==b[j] || a[j]==b[j]+32 || a[j]+32 ==b[j] || a[j]==b[j]-32 || a[j]-32 ==b[j])
        {
           continue;
        }
        else{
                if(a[j]>='A'&&a[j]<='Z') a[j]=a[j]+32;
                if(b[j]>='A'&&b[j]<='Z') b[j]=b[j]+32;
                e=e+(int)a[j];f=f+(int)b[j];printf("%c %c",a[j],b[j]);  break;};
    }
    if(e>f){printf("1\n");};
    if(e<f){printf("-1\n");};
    if(e==f){printf("0\n");};
    return 0;
}
