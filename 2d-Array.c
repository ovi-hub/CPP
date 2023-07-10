
#include <stdio.h>
#include <conio.h>
int main ()
{
    int a[100][100];
    int i=0,j=0,row,col;
    scanf("%d %d",&row,&col);
    for(i=0;i<row;i++)
    {
        for(j=0;j<col;j++)
        {
            printf("a[%d][%d] :  ",i,j);
            scanf("%d",&a[i][j]);
        }

    }
    // output

    for(i=0;i<row;i++)
    {
        for(j=0;j<col;j++)
        {
            printf("%d ",a[i][j]);
        }
        printf("\n");
    }

    return 0;

}

