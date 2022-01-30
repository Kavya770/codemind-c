#include<stdio.h>
int main()
{
    int i,j,r;
    scanf("%d",&r);
    scanf("%d%d",&i,&j);
    for(i=r;i>0;i--)
    {
        for(j=1;j<=i;j++)
        {
            printf("%d",j);
        }
        printf("
");
    }
    return 0;
}
