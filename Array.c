#include <stdio.h>
#include <conio.h>
int main ()
{
    int a[100];
    int i=0,n;
    scanf("%d",&n);
    while(i<n)
    {
        scanf("%d",&a[i]);
        i++;
    }
    for(i=0;i<n;i++)

    {
        printf("%d ",a[i]);
    }

    return 0;

}

