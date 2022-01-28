#include<stdio.h>
int main()
{
    int M,N,min,i,hcf=1;
    scanf("%d%d",&M,&N);
    min=M>N?N:M;
    for(i=min;i>=1;i--)
    {
        if(M%i==0&&N%i==0)
        {
            hcf=i;
            break;
        }
    }
    printf("%d",hcf);
    return 0;
    
}
