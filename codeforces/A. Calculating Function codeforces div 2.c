#include <stdio.h>
int main()
{
    long long i,b,a,c=0;
    scanf("%lld",&a);
    if(a%2==0){c=a/2;}
    else{c=(-a-1)/2;};
    printf("%lld\n",c);
    return 0;
}
