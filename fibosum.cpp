#include<iostream>
#include <stdio.h>
using namespace std;
void display(int m[2][2]){
	for(int i=0;i<2;i++){
		for(int j=0;j<2;j++){
			cout << m[i][j]<<" ";
		}
		cout<<endl;
	}
}

void multiply(long long F[2][2], long long M[2][2]);
 
void power(int F[2][2], int n);
 
/* function that returns nth Fibonacci number */
int fib(int n)
{
  int F[2][2] = {{1,1},{1,0}};
  if (n == 0)
    return 0;
  power(F, n-1);
  return F[0][0];
}
 
/* Optimized version of power() in method 4 */
void power(long long F[2][2], long long n)
{
	
  if( n == 0 || n == 1)
      return;
  long M[2][2] = {{1,1},{1,0}};
 
  power(F, n/2);
  multiply(F, F);
  if (n%2 != 0)
     multiply(F, M);
}
 
void multiply(int F[2][2], int M[2][2])
{
  long long x =  F[0][0]*M[0][0] + F[0][1]*M[1][0];
  long long  y =  F[0][0]*M[0][1] + F[0][1]*M[1][1];
  long long z =  F[1][0]*M[0][0] + F[1][1]*M[1][0];
  long long w =  F[1][0]*M[0][1] + F[1][1]*M[1][1];
 
  F[0][0] = x;
  F[0][1] = y;
  F[1][0] = z;
  F[1][1] = w;
}
int main(int argc, char const *argv[])
{	
	
	
	return 0;
}