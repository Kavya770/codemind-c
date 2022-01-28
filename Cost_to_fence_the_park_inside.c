#include<stdio.h>
int main()
{
    int L,B,W,C,A,Total;
    scanf("%d%d%d%d",&L,&B,&W,&C);
    if(L<=W+W||B<=W+W)
    {
        printf("Impossible");
    }
    else
    {
        A=L*B-((L-2*W)*(B-2*W));
        Total=A*C;
        printf("%d",Total);
    }
    return 0;
}
