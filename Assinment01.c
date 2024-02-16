#include<stdio.h>
#include<math.h>
#include<stdlib.h>
#include<stdbool.h>
#define f(x) ((x)*(x)*(x)-3*(x)*(x)+5*(x) -10.0)
#define EPS 10.0e-6

bool root_exists(double a,double b);

void bisection(double a,double b);

int main(){
	double a,b;
	printf("Equation: x*x*x-3*x*x+5*x-10.0\n");
	printf("Enter boundary values: ");
	scanf("%lf %lf",&a,&b);
	if(!root_exists(a,b)){
		printf("Root doesn't exists in the interval (%.3lf,%.3lf)\n",a,b);
		exit(0);
	}
	printf("a\tb\tc\tf(a)\tf(b)\tf(a)*f(b)\n");
	bisection(a,b);
	return 0;
}

bool root_exists(double a,double b){
	return f(a)*f(b)<=0;
}

void bisection(double a,double b){
	double c=(a+b)/2;
	printf("%.3lf\t%.3lf\t%.3lf\t%.3lf\t%.3lf\t%.3lf\n",a,b,c,f(a),f(b),f(a)*f(b));
	if(fabs(f(c)) < EPS){
		printf("\nRoot: %.3lf\n",c);
		return;
	}
	if(root_exists(a,c)){
		b=c;
		bisection(a,b);
	}
	else{
		a=c;
		bisection(a,b);
	}
}
