#include<stdio.h>
#include<stdlib.h>
#include<math.h>

#define f(x) ((x)*(x)*(x)+4*(x) -5.0)
#define EPS 10.0e-6

void Bisec(double p, double q) {
	int i,n=100;
	double a=p,b=q,c;

	if(f(a)*f(b) > 0)
	{
		printf("[%lf,%lf] : No Root .........\n",a,b);
		exit(0);
	}

	for(int i=0;i<n;i++)
	{
		c=(a+b)/2;
		//printf("%3d %lf %lf %lf %lf %lf %lf\n",i,a,b,c,f(a),f(b),f(c));
		
		if(fabs(f(c))<EPS)
		{
			printf("Root is : %lf\n",c);
			return;
			
		}
		else if(f(a)*f(c)<0)
		{
			b=c;
		}else a=c;
	}
return;	
}

int main()
{
 int i,n=6;
 double A =-5, B=5,p,q,h;
 h = (B-A)/n;
 p=A;
 for(int i=0; i<n; i++)
 {
   q=p+h;
   Bisec(p,q);
   p=q;
 }

return 0;
}
	
	
