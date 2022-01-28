#include<stdio.h>
int main()
{
    int n,f=0,s=1,i,next;
    scanf("%d",&n);
    printf("%d ",f);
    printf("%d ",s);
    for(i=2;i<n;i++)
    {
        next=f+s;
        printf("%d ",next);
        f=s;
        s=next;
    }
    return 0;
}
