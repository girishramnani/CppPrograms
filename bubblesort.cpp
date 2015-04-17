#include<stdio.h>


void swap(int &a,int &b){
	a = a+b;
	b=a-b;
	a=a-b;
}


void display(int *num){
	for(int num1=0; *(num+num1);num1++){
		printf("%d\n",num[num1] );
	}
}

int bubblesort(int *num,int size,bool (*comp)(int,int)){
	int count=0;
	for(int i=0;i<size-1;i++){
		for(int j=0;j<size-i-1;j++){
			if(comp(num[j],num[j+1])){
				count+=1;
				swap(num[j],num[j+1]);				
			}
		}
	}
	return count;

}

bool func(int a ,int b){
	if (a >b){
		return true;
	}
	return false;
}
int main(int argc, char const *argv[])
{
	int a[] = {9,8,7,6,5,4,3,2,1};
	printf("%d\n",bubblesort(a,sizeof(a)/sizeof(int),func));
	bool (*p)(int,int);

	display(a);
	return 0;
}