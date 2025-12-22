#include <stdio.h>
#include <string.h>
int main()
{
    long long b,i,j=0,k=1;
    char a[100];
    scanf("%[^\n]s",&a);
    b=strlen(a);
    for(i=0;i<=b-1;i++)
    {
        if(i==0 && a[i]=='9'){goto m;}
        if(a[i]>'4')
        {
            a[i]=('9'-a[i])+'0';
        }
        m:
        j=j*k+(int)a[i]-'0';
        k=10;
    }
    printf("%lld\n",j);
    return 0;
}
