#include<stdio.h>
int main()
{
    int n,i,s=0;
    scanf("%d",&n);
    for(i=1;n>i;i++)
    {
        s=s+i;
    }
    printf("%d",s);
}
