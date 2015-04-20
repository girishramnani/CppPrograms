#include<stdio.h>

struct queue{
	/* Useing the classic 2 pointer  1 array implementation */
	int head=0;
	int list[1000];
	int tail=0;

};


int que(queue &q,int adder){
	if(q.head+1 ==q.tail){
		return -1;
	}
	q.head = q.head%1000;
	q.list[q.head++] = adder;
}
bool empty(queue &q){
	if(q.head ==q.tail){
		return true;
	}
	return false;
}
int dequeue(queue &q){
	if (q.head+1==q.tail){
		return -1;
	}
	
	int temp = q.list[q.tail];
	q.tail+=1;
	q.tail =q.tail%1000;
	return temp;
}

void view(queue q){
	for(int i=0;i<1000;i++){
		printf("%d ",q.list[i] );
	}
} 
