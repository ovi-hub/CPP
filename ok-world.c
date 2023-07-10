#include <stdio.h>
int main ()
{
    char S[100];
    int i=0,count=0;
    gets(S);

    while (S[i]!=0)
    {
        if(S[i]=='o' &&S[i+1]=='k')
        {
            count++;
        }
        i++;
    }
    printf("%d",count);
    return 0;

}
