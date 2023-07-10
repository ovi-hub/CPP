#include <stdio.h>

int main ()

{
    int binary=0,decimal,rem;
    scanf("%d",&decimal);
    while(decimal!=0)
    {
        rem = decimal%2;
        binary = binary *10 +rem;
        decimal =decimal/2;

    }
    printf("%d\n",binary);
    return 0;

}
