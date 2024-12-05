#include <stdio.h>
int fun(int val)
{
    if (val==0)
    {
        return 1;
    }
    else
        return 2*fun(val-1);
}
int main ()
{
    int num = 5;
    int res = fun(num);
    printf("Result = %d \n",res);
    return 0;

}
