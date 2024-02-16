#include<stdio.h>
#include<math.h>

#define EPS .000001

double a[3][3],b[3],xNew[3],xOld[3];

void Guass_Seidel()
{


    for(int i=0; i<3; ++i)
    {
        xOld[i]=0;
        xNew[i]=0;
    }



    int count =0;

    while(1)
    {
        count++;
        for(int i=0; i<3; ++i)
        {
            xNew[i]=b[i];
            for(int j=0; j<3; ++j)
            {
                if(i!=j)
                {
                    xNew[i]-=(a[i][j]*xNew[j]);
                }
            }
            xNew[i]/=a[i][i];


        }

        if(fabs(xNew[0]-xOld[0])<EPS &&  fabs(xNew[1]-xOld[1])<EPS && fabs(xNew[2]-xOld[2])<EPS)
        {
            printf("Solution : \n");
            printf("x1 : %lf\n",xNew[0]);
            printf("x2 : %lf\n",xNew[1]);
            printf("x3 : %lf\n",xNew[2]);

            printf("Iteration : %d\n",count);

            return 0;
        }
        for(int i=0; i<3; ++i)
        {
            xOld[i]=xNew[i];
        }

    }

}

int main()
{

    freopen("input.txt","r",stdin);
    for(int i=0; i<3 ; ++i)
    {

        scanf("%lf %lf %lf %lf\n",&a[i][0],&a[i][1],&a[i][2],&b[i]);


    }


    Guass_Seidel();

    return 0;
}



