#include<stdio.h>
#include<math.h>
int main()
{
    int n,d,r,c=0;
    scanf("%d",&n);
    d=(int)log10(n);
    while(n>0)
    {
        r=n/(int)ceil(pow(10,d));
        if(r==6&&c==0)
        {
            printf("9");
            c=1;
        }
        else
        {
            printf("%d",r);
        }
        n=n%(int)ceil(pow(10,d));
        d--;
    }
    return 0;
}
