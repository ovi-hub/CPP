#include <stdio.h>
int main()
{


    int num[5]={10,20,30,40,50};
    int *pointer = num +3;
    printf("Pointer = %d \n",*pointer);
    printf("Array started at = %d \n",*num);
    // Ans = 40
    return 0;
    }
/*
    int x = 5;
    int *ptr = &x;
    printf("*ptr =%d \n",*ptr);
    printf("&x =%d \n",&x);
    printf("P =%d \n",ptr);

    */





