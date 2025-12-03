#include <stdio.h>
#include <string.h>
int main()
{
    int n=1,l;
    scanf("%d",&l);
    while(n<=l){
        int i,j,d,c=0;
        char a[110];
        for(i=1;i<=10;i++)
        {
            getchar();
            scanf("%[^\n]s",&a);
            d=11-i;
            for(j=0;j<=9;j++)
           {
               if(i==1||d==1){if(a[j]=='X'){c=c+1;};};
               if(i==2||d==2){if(a[j]=='X'){if(j==0 || j==9){c=c+1;}else{c=c+2;};};};
               if(i==3||d==3){if(a[j]=='X'){
                if(j==0 || j==9){c=c+1;}
                else if(j==1 || j==8){c=c+2;}
                else{c=c+3;};
               }}
               if(i==4||d==4){if(a[j]=='X'){
                if(j==0 || j==9){c=c+1;}
                else if(j==1 || j==8){c=c+2;}
                else if(j==2 || j==7){c=c+3;}
                else{c=c+4;};
               }}
               if(i==5||d==5){if(a[j]=='X'){
                if(j==0 || j==9){c=c+1;}
                else if(j==1 || j==8){c=c+2;}
                else if(j==2 || j==7){c=c+3;}
                else if(j==3 || j==6){c=c+4;}
                else{c=c+5;};}}
            }
        }
        printf("%d\n",c);
        n=n+1;}
    return 0;
}
