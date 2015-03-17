#include<stdio.h>

##ifndef SIZE
#define SIZE 150
#endif		
struct queue{
	/* Useing the classic 2 pointer  1 array implementation */
	int head=0;
	int list[SIZE];
	int tail=0;

};


int que(queue &q,int adder){
if(q.head ==SIZE){
	q.list[q.head++] = adder;
}
	

}

int dequeue(queue &q){
	if (q.head==q.tail){
		return -1;
	}
	
	int temp = q.list[q.tail];
	q.tail+=1;
	return temp;
} 
