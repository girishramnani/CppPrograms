#include<stdio.h>
void swap(int *x,int *y){
	*x = *x ^ *y;
	*y= *x ^ *y;
	*x = *x ^ *y;
}
void mask(int a){

	printf("%.8x\n",a &0x00000FF);
}
void equals(int a, int b){
	int t = !(a^b);
	printf("%d\n",t);
}
int main(int argc, char const *argv[])
{
		int x=0x66;
		int y=0x39;
		printf("%x\n",x>>>1 );
		equals(5,0x01);
		

}