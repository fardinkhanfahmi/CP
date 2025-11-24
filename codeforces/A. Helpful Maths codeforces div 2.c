#include <stdio.h>
#include<string.h>
int main()
{
    char a[110],j;
    int i,b,c=0,d;
    scanf("%[^\n]s",&a);
    b=strlen(a);
    m:
    j=a[c];
    for(i=0;i<=b-1;i=i+2)
    {
        if(a[i]<j){j=a[i];d=i;};
        if(a[i]==j){j=a[i];d=i;};
    }
    if(c%2==0){printf("%c",j);}
    else{printf("%c",a[b-2]);};
    a[d]='z';
    if(c<b-1){c=c+1;goto m;};
    printf("\n");
    return 0;
}
