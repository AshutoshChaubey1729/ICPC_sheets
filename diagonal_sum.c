# include <stdio.h>
int main(){ 
int n;
printf("enter the rows or columns of the square matrix 🔲::");
scanf("%d",&n);
int *ptr=malloc(n*n*sizeof(int)); //taking the matrix as 1d array
for(int i=0;i<n*n;i++){
    scanf("%d",&ptr[i]);
}
int s=0,t=0;
for(int i=0, j=n*n-n;i<n*n;i++,j++){
 s+=ptr[i];
 i+=n;
 t+=ptr[j];
 j-=n;
  
 }
 
 int sum= (n%2==0) ? s+t: s+t-ptr[n*n/2];
 
 
 ;
 printf("%d",sum);
 }