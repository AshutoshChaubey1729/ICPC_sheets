#include<stdio.h>
#include<stdlib.h>
int main()
{   int size;
    printf("enter no. of elements::");
    scanf("%d",&size);
    int *arr=malloc(size*sizeof (int));
    //12341112121
    for(int i=0;i<size;i++)
    scanf("%d",&arr[i]);
    int count=0,x;
    for(int i=0; i<size; i++) {
        if(count==0) x=arr[i];
        count+=(arr[i]==x)?1:-1;
    }
    printf("The majority element is %d.",x);
}