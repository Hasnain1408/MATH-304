#include<stdio.h>
#include<math.h>


int main()
{
	double a=0,b=2*3.1415926,n=100,h;
	double x[101],y[101],dy[101];
	
	h = (b-a)/n;

	
	x[0]=a;
	y[0]=sin(x[0]);
	//dy[0]=(sin(a+h)-sin(a))/h);
	
	for(int i = 1; i<n; i++)
	{	
		x[i]=x[i-1]+h;
		y[i]=sin(x[i]);
		
	}
	x[100]=b;
	y[100]=sin(2*3.1415926);

	dy[0]=(y[1]-y[0])/(x[1]-x[0]);

	for(int i = 1; i<n; i++)
	{	
		dy[i]=(y[i+1]-y[i])/(x[i+1]-x[i]);
		
	}
	dy[100]=(y[100]-y[99])/(x[100]-x[99]);

	for(int i = 0; i<=n; i++)
	{	
		printf("%lf,%lf,%lf\n",x[i],y[i],dy[i]);
		
	}
	
return 0;
}
