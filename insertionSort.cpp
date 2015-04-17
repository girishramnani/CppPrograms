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

int insertionsort(int *num,int size,bool (*comp)(int,int)){
	int count=0;
	for(int i=1;i<size;i++){
		for(int j=i;j>=0 && comp(num[j],num[j-1]);j--){
				count+=1;
				swap(num[j],num[j-1]);		

		}
	}
	return count;

}

bool func(int a ,int b){
	if (a <b){
		return true;
	}
	return false;
}
int main(int argc, char const *argv[])
{
	int a[] = {9,8,7,6,5,4,3,2,1};
	printf("%d\n",insertionsort(a,sizeof(a)/sizeof(int),func));
	display(a);
	return 0;
}