#include <stdio.h>
int main()
{
    int M,N,i,j;
    scanf("%d  ",&N);
    scanf("%d  ",&M);
    for(i=N;i<=M;i++)
    {
        for (j=1;j<=10;j++)
        {
            printf(" %d x %d = %d ",i,j,i*j);
        }
        printf("\n \n");

    }
    return 0 ;

}
