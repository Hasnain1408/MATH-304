#include<stdio.h>
int main()
{
    int i,j,k,n;
    double A[20][20],c,x[10];
    printf("\nEnter the size of matrix: ");
    scanf("%d",&n);
    printf("\nEnter the elements of augmented matrix row-wise:\n");
    for(i=1; i<=n; i++)
    {
        for(j=1; j<=(n+1); j++)
        {
            printf(" A[%d][%d]:", i,j);
            scanf("%f",&A[i][j]);
        }
    }
    for(i=0; i<n-1; i++){
      if(fabs(A[i][i])<EPS){
	  for(j=i+1; j<n; j++){
	     if(fabs(A[i][j])>EPS)
		for(k=i; k<n+1; k++)
		{
		  int temp

    for(i=1; i<=n; i++)
    {
        for(j=1; j<=n; j++)
        {
            if(j>i)
            {
                c=A[j][i]/A[i][i];
                for(k=1; k<=n+1; k++)
                {
                    A[j][k]=A[j][k]-c*A[i][k];
                }
            }
        }
    }
    printf("\nThe solution is:\n");
    for(i=1; i<=n; i++)
    {
        x[i]=A[i][n+1]/A[i][i];
        printf("\n x%d=%f\n",i,x[i]);
    }
    return(0);
}
