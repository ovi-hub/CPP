#include<stdio.h>
int main()
{
    int r,c,n;
    printf("N = ");
    scanf("%d",&n);
    for(r=n-1; r>=1; r--)
    {
        for(c=1; c>=r; c--)
        {
            printf("%d ",r);
        }
        printf("\n");
    }
    return 0;

}



