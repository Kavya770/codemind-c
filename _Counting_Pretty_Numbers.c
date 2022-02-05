#include<stdio.h>
int main()
{
    int i,m,n,k,j,r,count=0;
    scanf("%d",&i);
    while(i>0)
    {
        count=0;
        scanf("%d%d",&m,&n);
        for(j=m;j<=n;j++)
        {
            r=j%10;
            if(r==2||r==3||r==9)
            {
                count++;
            }
        }
        printf("%d
",count);
        i--;
    }
    return 0;
}