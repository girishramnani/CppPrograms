#include<stdio.h>


struct alphabets
{
	int a;
	int b;
	int c;
	int d;
	int e;
	int f;
	int g;
	int h;
	int i;
	int j;
	int k;
	int l;
	int m;
	int n;
	int o;
	int p;
	int q;
	int r;
	int s;
	int t;
	int u;
	int v;
	int w;
	int x;
	int y;
	int z;

};
int main(int argc, char const *argv[])
{
	alphabets alpha;
	int OFFSET=95;
	// challenge can be to initialize all the alphabets to their asci value
	//so the solution is 

	int *array =(int *) &alpha;
	for(int i=0;i<26;i++){
		*(array+i) = OFFSET+i;
	}
	//to check you can check the output
	printf("%d\n",alpha.a );
	printf("%d\n",alpha.b );
	printf("%d\n",alpha.c);
	return 0;
}