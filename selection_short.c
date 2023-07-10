#include<stdio.h>
#include<stdlib.h>
   void main(){
       int i,j,min_index,temp;
       int a[]={9,25,8,200,7,523,-12};
       //outer loop for iteration over all the numbers
       for(i=0;i<7;i++){
        min_index = i;
        //inner loop to find min index
        for(j=i+1;j<7;j++){
            if(a[j]<a[min_index])
                {
                    min_index=j;
            }

            // swap two numbers i, min_index
            if(min_index!=i){
                    temp=a[i];
                    a[i]=a[min_index];
                    a[min_index]=temp;
            }

        }

       }


    // Printing sorted array
    printf("Sorted Array : ");
    for(int i=0;i<7;i++)
    {
        printf("%d \n",a[i]);
    }















   return 0;
   }
