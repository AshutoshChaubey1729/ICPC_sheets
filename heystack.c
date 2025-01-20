# include <stdio.h>
# include<stdlib.h>
#include<string.h>
int main(){ 
    char *heystack=malloc(100001);
    char *needle=malloc(100001);
    printf("enter string1\n");
    gets(heystack);
    printf("\nenter str2\n");
    gets(needle);
    int n=strlen(needle);
    int m=strlen(heystack);
    int ind=-1,i,j;
    for(i=0;i<=m-n;i++)
    {    
        for(j=0;j<n;j++)
        {    
            if(heystack[i+j]!=needle[j])
            break;
            
            
        }
        if(j==n)
        {
        ind=i;
        break;
        }
    }
    
    printf("\n the string is present at %d index.%d  %d",ind,m,n);


 }