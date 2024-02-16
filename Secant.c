#include<stdio.h>
#include<stdlib.h>
#include<math.h>

#define f(x) ((x)*(x)*(x)+4*(x)*(x) -10.0)
#define EPS 10.0e-6

int Secant(double f_value,double l_Value) {
	int i,n=100;
	double a=f_value,b=l_Value,c;

	

	for(int i=1;i<n;i++)
	{
		c=(a*f(b)-b*f(a))/(f(b)-f(a));
		printf("%3d %lf %lf %lf %lf %lf %lf\n",i,a,b,c,f(a),f(b),f(c));
		
		if(fabs(f(c))<EPS)
		{
			printf("Root is : %lf\n",c);
			exit(0);
		}
		
		else{
		 a=b;b=c;
		}
	}

	return 0;
}

int main(void)
{
	 Secant(100,2.0);

return 0;
}

