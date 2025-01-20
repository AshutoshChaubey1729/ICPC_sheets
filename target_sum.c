#include<stdio.h>
#include<stdlib.h>
int main()
{   int size,target;
    printf("enter no. of elements::");
    scanf("%d",&size);

    int *arr=malloc(size*sizeof (int));
    int i,j,check=0;
    printf("enter the elements:\n");
    for(i=0; i<size; i++)
        scanf("%d",&arr[i]);
    printf ("Enter the target element::");
    scanf("%d",&target);
    for(i=0; i<size-1; i++) {
        if(arr[i]>target) continue;
        for(j=i+1; j<size; j++)
        {
            if(arr[i]+arr[j]==target) {
                printf("The indexes are %d %d.",i,j);
                check=1;
                break;
            }

        }
        if(check==1) break;
    }
    if(check==0)
    printf ("The resultant of any two number is not equal to target.");

}