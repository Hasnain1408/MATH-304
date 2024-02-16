#include<stdio.h>
#include<stdlib.h>
#include<math.h>

#define f(x) ((x)*(x)*(x)+4*(x)*(x) -10.0)
#define EPS 10.0e-6

int Bisection(double f_value,double l_Value) {
	int i,n=100;
	double a=f_value,b=l_Value,c;

	if(f(a)*f(b) > 0)
	{
		printf("[%lf,%lf] : No Root .........\n",a,b);
		exit(0);
	}

	for(int i=1;i<n;i++)
	{
		c=(a+b)/2;
		printf("%3d %lf %lf %lf %lf %lf %lf\n",i,a,b,c,f(a),f(b),f(c));
		
		if(fabs(f(c))<EPS)
		{
			printf("Root is : %lf\n",c);
			exit(0);
		}
		else if(f(a)*f(c)<0)
		{
			b=c;
		}else a=c;
	}

	return 0;
}

int main(void)
{
	 Bisection(1.25,1.50);

return 0;
}

