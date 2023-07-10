
#include <stdio.h>
int main ()
{
    int p[100];
    int i,n,sum;
    scanf("%d",&n);
    for(i=0;i<n;i++)
    {
        scanf("%d",&p[i]);
    }
    for(i=0;i<n;i++)
    {
        sum = sum + p[i];
    }
    printf("Total Value is = %d ",sum);


    return 0;

}

