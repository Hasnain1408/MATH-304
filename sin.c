#include<stdio.h>
#include<math.h>

int main()
{
	double a=0,b=2*3.1415926,h,x;
	int n=100;
  	
	h=(b-a)/n;
	printf("\"x\", \"sin(x)\"\n");
	
	x=a;
	printf("%lf, %lf\n",x,sin(x));

	for(int i=1; i<n; i++)
	{
		x=x+h;
		printf("%lf, %lf\n",x,sin(x));
	}
	
	x=b;
	printf("%lf, %lf\n",x,sin(x));

 return 0;
}
