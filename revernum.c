#include<stdio.h>
void main()
{
    int r,s=0,t;
    scanf("%d",&t);
    while(t)
    {
        r=t%10;
        s=s*10+r;
        t=t/10;
    }
    printf("%d",s);
}
