#include <stdio.h>
#include <malloc.h>
#include <math.h>
#include <assert.h>
int parent(int i){
	return floor((i-1)/2.0);
}

int left(int i){
	return (i*2)+1;
}
int right(int i){
	return (i*2)+2;
}
void tests(){
	assert(parent(right(4))==4);
	assert(parent(left(4))==4);
}

void swap(int &ind,int &ind2){
	int temp=ind;
	ind=ind2;
	ind2=temp;
}

void heapify(int *array,int index,int size){

	int l = left(index);
	int r = right(index);
	int min=index;
	if(l<size && array[l]>array[min] ){
		min =l;
	}
	if(r<size && array[r] >array[min]){
		min = r;
	}
	if(min != index){
		swap(array[min],array[index]);
		heapify(array,min,size);
	}

}
void display(int * array){
	for(int i=0;*(array+i);i++){
		printf("%d\n",*(array+i));
	}
}

void build_heap(int *array,int size){
	int count =size;
	for(int i=size/2;i>-1;i--){
		heapify(array,i,size);
	}
}
	
void heap_sort(int *array,int size){
	int count = size;
	for(int i=0;i<size;i++){
		build_heap(array,size-i);
		swap(array[size-i-1],array[0]);
	}
}

int main(int argc, char const *argv[])
{
	int array[]={9,8,7,6,5};
	tests();

	heap_sort(array,5);
	for(int i=0;i<5;i++){
		printf("%d\n",array[i] );
	}

	return 0;
}