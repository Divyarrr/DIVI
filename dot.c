#include<stdio.h>
void main()
{
    char a[100];
    int i,l=0;
    gets(a);
    for(i=0;a[i]!=NULL;i++)
    {
        l++;
    }
    a[l]='.';
    for(i=0;i<=l;i++)
    printf("%c",a[i]);
}
