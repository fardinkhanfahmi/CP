#include <stdio.h>
#include<string.h>
int main()
{
    char a[110],j;
    int i,b,c=0,d=0;
    scanf("%[^\n]s",&a);
    b=strlen(a);
    m:
    j=a[c];
    for(i=0;i<=b;i++)
    {
        if(a[i]=='\0'){break;};
        if(j==a[i]&&c!=i){a[i]='$';};
    }
    if(c<b){c=c+1;goto m;};
    for(i=0;i<=b;i++)
    {
        if(a[i]=='\0'){break;};
        if(a[i]>='a'&&a[i]<='z'){d=d+1;};
    }
    //printf("%s\n",a);
    if(d%2==0){printf("CHAT WITH HER!\n");}
    else{printf("IGNORE HIM!\n");};
    return 0;
}
