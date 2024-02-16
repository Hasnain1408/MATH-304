#include<stdio.h>

#define f(x) ((x)*(x)+1)


int main()
{
double x,h;
int n=10;
double y[11] = {0.0, 0.2 ,0.4 ,0.6 ,0.8 ,1.0 ,1.2 ,1.4, 1.6 ,1.8, 2.0};
double f[11] = {1.0 ,1.04 ,1.16 ,1.36 ,1.64 ,2.0 ,2.44 ,2.96 ,3.56 ,4.24 ,5.0};
double I,sum_I=0,sum_X=0;

h=(y[1]-y[0]);



for(int i=1; i<n; i++)
{

sum_I += f[i];
}


sum_X = (f[0]+f[n]);

I = (h*(sum_X+2*sum_I))/2;

printf("%lf\n",I);

return 0;
}


