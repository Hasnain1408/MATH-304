#include<stdio.h>
#include<math.h>


int main()
{
	double a=0,b=2*3.1415926,n=100,h,x;
	
	h = (b-a)/n;

//	double arr[n];
	x=a;
	printf("%lf,%lf,%lf\n",x,sin(x),cos(x));
	
	//arr[0] = a;
	for(int i = 1; i<n-1; i++)
	{	
		x=x+h;
		printf("%lf,%lf,%lf\n",x,sin(x),cos(x));
		
	}
	x=b;
	printf("%lf,%lf,%lf\n",x,sin(x),cos(x));
return 0;
}
