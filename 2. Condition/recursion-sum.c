#include <stdio.h>
#include <conio.h>
int main ()
{
    int a[100];
    int i=4,n;
    scanf("%d",&n);
    a[1]=1;
    a[2]=2;
    a[3]=3;

    while(i<=n)

    {
        a[i]=a[i-1]*a[i-2]*a[i-3];
        i++;
    }
    printf("%d",a[n]);



    return 0;

}

