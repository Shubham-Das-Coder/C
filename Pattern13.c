#include<stdio.h>
int main(int argc, char const *argv[])
{
    int i,j,x,y,n=5;
    for(i=1;i<=n;i++)
    {
        x=i;
        y=n-j+1;
        for(j=1;j<=n;j++)
        {
            if(j%2==1)
            {
                printf("%3d",x);
            }
            else
            {
                printf("%3d",y);
            }
            x=x+n;
            y=y+n;
        }
        printf("\n");
    }
    return 0;
}
