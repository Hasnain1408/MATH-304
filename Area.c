#include<stdio.h>
#include<math.h>

#define f(x) ((x)*(x))
#define g(x) (sqrt(x))
#define h(x) (f(x)-g(x))

#define EPS 10.0e-6

double Bisection(double start,double end) {
	int i,n=100;
	double a=start,b=end,c;

	if(h(a)*h(b) > 0)
	{
		printf("[%lf,%lf] : No Root .........\n",a,b);
		return 0;
	}

	for(int i=1;i<n;i++)
	{
		c=(a+b)/2;
		
		if(fabs(h(c))<EPS)
		{
			printf("Root is : %lf\n",c);
			return c;
		}
		else if(h(a)*h(c)<0)
		{
			b=c;
		}else a=c;
	}

	return 0;
}


int main()
{

double a=0.0,b,x,h;
int n=10;
double y[11],I,sum_I=0,sum_X=0;

b=Bisection(.5,1.25);

h=(b-a)/n;

x=a;
y[0]=fabs(h(a));

for(int i=1; i<n; i++)
{
x=x+h;
y[i]=fabs(h(x));
sum_I += y[i];
}

y[n]=fabs(h(b));

sum_X = (y[0]+y[n]);

I = (h*(sum_X+2*sum_I))/2;

printf("%lf\n",I);


return 0;
}

