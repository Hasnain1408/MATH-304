#include<stdio.h>
#include<stdlib.h>
#include<math.h>

#define f(x) ((x)*(x)*(x)+4*(x)*(x) -10.0)
#define d(x) (3*(x)*(x)+8*(x))
#define EPS 10.0e-6

int root(double f_value) {
	int i,n=100;
	double a=f_value,c;

	

	for(int i=1;i<n;i++)
	{
		c=a-(f(a)/d(a));
		printf("%3d %lf %lf %lf %lf\n",i,a,c,f(a),f(c));
		
		if(fabs(f(c))<EPS)
		{
			printf("Root is : %lf\n",c);
			exit(0);
		}
		
		else{
		 a=c;
		}
	}

	return 0;
}

int main(void)
{
	 root(2.0);

return 0;
}

