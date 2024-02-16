#include<stdio.h>
#include<math.h>

int main()
{
    int i,j,k,n;
    printf("Enter the order of matrix : ");
    scanf("%d",&n);
    double arr[n][2*n],quotient;
    printf("Enter Matrix:");
    for(i=0;i<n;++i)
    {
        for(j=0;j<n;++j)
        {
            scanf("%lf",&arr[i][j]);
        }
    }

    for(i=0;i<n;++i)
    {
        for(j=0;j<2*n;++j)
        {
            if(j-i==n)
            arr[i][j]=1;
            else arr[i][j]=0;
        }
    }

     for(i=0;i<n;++i)
    {
        for(j=0;j<n;++j)
        {
             if(i!=j)
             {
                 quotient=arr[j][i]/arr[i][i];
                 for(k=0;k<2*n;++k)
                 {
                     arr[j][k]-=quotient*arr[i][k];
                 }
             }


        }
    }

     for(i=0;i<n;++i)
    {
        for(j=0;j<n;++j)
        {
            printf("%.3lf",arr[i][j]);
        }
        printf("\n");
    }

     for(i=0;i<n;++i)
    {
        double temp=arr[i][i];
        for(j=0;j<2*n;++j)
        {
           arr[i][j]=arr[i][j]/temp;
        }
    }

      for(i=0;i<n;++i)
    {
        for(j=0;j<n;++j)
        {
            printf("%3lf\t",arr[i][j]);
        }
        printf("\n");
    }
    printf("\n Inverse Matrix : \n");

      for(i=0;i<n;++i)
    {
        for(j=n;j<2*n;++j)
        {
            printf("%lf\t",arr[i][j]);
        }
        printf("\n");
    }



    return 0;
}
