#include <stdio.h>
#include <stdlib.h>

void drawInvertedTriangle (int rows);

int main()
{
    int rows;

    printf("input rows:  ");
    scanf("%d",&rows);


    drawInvertedTriangle(rows);
    return 0;
}


void drawInvertedTriangle(int rows)
{
    int i,j;

    for (i=1;i<=rows;i++)
    {
        for (j=1;j<=rows;j++)
        {
            if (j<=rows-i)
            {
                printf("*");
            }
            else
            {
                printf(" ");
            }
        }
        printf("\n");
    }

}
