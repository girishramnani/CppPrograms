#include<stdio.h>
#include<math.h>

double abs_2(double x){
	return x>0 ? x : -x;
}
double function(double x){
	return exp(-x)-x;

}
double secant_func(double (*p)(double) , double xi,double xi_1){
	return xi - (((xi -xi_1)*p(xi))/(p(xi)-p(xi_1)));
}
double secant( double (*p)(double) , double lower , double upper){
	double xii = secant_func(p,upper,lower);
	double xi = secant_func(p,xii,upper);
	
	printf("%f %f\n",xi,xii );
	while(abs_2(xii-xi) > 0.0000001 ){

		xii = secant_func(p,xi,xii);
		xi = secant_func(p,xii,xi);
		printf("%f %f \n",xi,xii );
	}
	
}

int main(){
double lower = 0;
double upper = 1;
	secant(function,lower,upper);
}