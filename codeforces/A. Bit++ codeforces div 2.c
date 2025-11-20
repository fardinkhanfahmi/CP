#include<stdio.h>
#include<string.h>
int main()
{
    char a[4];
    int i,j,b=0;
    scanf("%d",&i);
    for(j=1;j<=i;j++)
    {
        getchar();
        scanf("%[^\n]s",&a);
        if(a[0]=='+'){if(a[1]=='+'){if(a[2]=='X'){b=b+1;};};};
        if(a[0]=='X'){if(a[1]=='+'){if(a[2]=='+'){b=b+1;};};};
        if(a[0]=='-'){if(a[1]=='-'){if(a[2]=='X'){b=b-1;};};};
        if(a[0]=='X'){if(a[1]=='-'){if(a[2]=='-'){b=b-1;};};};
    }
    printf("%d\n",b);
    return 0;
}
