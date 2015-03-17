#include<stdio.h>
#include<malloc.h>
int * work(){
	int * wo= (int *) malloc(sizeof(int)*5);
	wo[0]=5;
	wo[1]=15;
	return wo;


}
int main(int argc, char const *argv[])
{
	int a[] = {1,2,3,4,5};
	printf("%p\n",&a[0] );
	printf("%p\n",a );

	int *a2 = work();
	delete(a2);
	
	a2[1]=12312;
	
	printf("%d\n",a2[123] ); 
	printf("%d\n",sizeof(a2) ); 
 	return 0;
}