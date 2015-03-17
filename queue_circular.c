#include<stdio.h>

struct queue{
	/* Useing the classic 2 pointer  1 array implementation */
	int head=0;
	int list[5];
	int tail=0;

};


int que(queue &q,int adder){
	if(q.head+1 ==q.tail){
		return -1;
	}
	q.head = q.head%5;
	q.list[q.head++] = adder;
}

int dequeue(queue &q){
	if (q.head+1==q.tail){
		return -1;
	}
	
	int temp = q.list[q.tail];
	q.tail+=1;
	q.tail =q.tail%5;
	return temp;
}

void view(queue q){
	for(int i=0;i<5;i++){
		printf("%d ",q.list[i] );
	}
} 
int main(int argc, char const *argv[])
{

	queue x;
	que(x,5);
	que(x,6);
	que(x,7);
	que(x,8);
	view(x);
	printf("\n%d\n",dequeue(x) );
	printf("\n%d\n",dequeue(x) );	
	view(x);
	que(x,6);
	que(x,7);
	que(x,8);
	printf("\n");
	view(x);
	printf("\n");
	
	return 0;
}