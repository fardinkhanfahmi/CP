#include <stdio.h>
int main()
{
    int n,l;
    scanf("%d",&n);
    for(l=1;l<=n;l++)
    {
        int b;
        scanf("%d",&b);
       if(((b+1)%3==0)||((b-1)%3==0)){printf("First\n");}
       else{printf("Second\n");};
       };
    return 0;
}
