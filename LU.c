#include<stdio.h>
#include<math.h>

int main()
{
    int i,j,k,n;
    printf("Enter the order of matrix : ");
    scanf("%d",&n);
    double A[n][n],L[n][n],U[n][n],quotient;
    printf("Enter Matrix:");
    for(i=0;i<n;++i)
    {
        for(j=0;j<n;++j)
        {
            scanf("%lf",&A[i][j]);
            U[i][j]=A[i][j];
        }
    }

    for(i=0;i<n;++i)
    {
        for(j=0;j<n;++j)
        {
            if(i==j)
            L[i][j]=1;
            else L[i][j]=0;
        }
    }

     for(i=0;i<n;++i)
    {
        for(j=i+1;j<n;++j)
        {

                 quotient=U[j][i]/U[i][i];
                 for(k=0;k<n;++k)
                 {
                     U[j][k]-=quotient*U[i][k];
                 }

                L[j][i]=quotient;
        }
    }

     printf("\n\n");
     printf("A matrix : \n");

     for(i=0;i<n;++i)
    {
        for(j=0;j<n;++j)
        {
            printf("%.3lf\t",A[i][j]);
        }
        printf("\n");
    }

    printf("\n\n");
    printf("U matrix : \n");

    for(i=0;i<n;++i)
    {
        for(j=0;j<n;++j)
        {
            printf("%.3lf\t",U[i][j]);
        }
        printf("\n");
    }

    printf("\n\n");
    printf("L matrix : \n");

    for(i=0;i<n;++i)
    {
        for(j=0;j<n;++j)
        {
            printf("%.3lf\t",L[i][j]);
        }
        printf("\n");
    }

    double result[n][n];
     for(i=0;i<n;++i)
    {
        for(j=0;j<n;++j)
        {
            result[i][j]=0;
            for(k=0;k<n;k++)
            {
                result[i][j]+=L[i][k]*U[k][j];
            }

        }
    }

    printf("\n\n");
    printf("result matrix : \n");

    for(i=0;i<n;++i)
    {
        for(j=0;j<n;++j)
        {
            printf("%.3lf\t",result[i][j]);
        }
        printf("\n");
    }


    return 0;
}
