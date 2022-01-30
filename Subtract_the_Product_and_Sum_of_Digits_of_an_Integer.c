#include<stdio.h>
int main()
{
    int num,n,x,rem,s=0,p=1;
    scanf("%d",&num);
    n=num;
    while(n>0)
    {
        rem=n%10;
        p*=rem;
        s+=rem;
        n=n/10;
    }
    x=p-s;
    printf("%d",x);
    return 0;
}
