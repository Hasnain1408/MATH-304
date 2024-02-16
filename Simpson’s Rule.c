#include<stdio.h>

#define f(x) ((x)*(x)+1)


int main()
{
double a=0.0,b=2.0,x,h;
int n=10;
double y[11],I,sum_O=0,sum_E=0,sum_X=0;

h=(b-a)/n;

x=a;
y[0]=f(a);

for(int i=1; i<n; i++)
{
x=x+h;
y[i]=f(x);
if(i%2 == 0) sum_E += y[i];
else sum_O += y[i];

}

y[n]=f(b);

sum_X = (y[0]+y[n]);

I = (h*(sum_X+4*sum_O+2*sum_E))/3;

printf("%lf\n",I);

return 0;
}


