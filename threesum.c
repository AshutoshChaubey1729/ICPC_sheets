#include<stdio.h>
#include<stdlib.h>
int main()
{   int size,target;
    printf("enter no. of elements::");
    scanf("%d",&size);

    int *arr=malloc(size*sizeof (int));
    int i,j,k;
    printf("enter the elements:\n");
    for(i=0; i<size; i++)
        scanf("%d",&arr[i]);
    printf ("Enter the target element::");
    scanf("%d",&target);
    for(i=0; i<size-2; i++) {
        for(j=i+1; j<size-1; j++) {
            for(k=i+2; k<size; k++)
            {
                if(arr[i]+arr[j]+arr[k]==0) {
                    printf("(%d %d %d)\n",i,j,k);


                }

            }

        }
    }
    printf ("No triplets found!");

}