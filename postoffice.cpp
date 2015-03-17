#include<iostream>
#include<stdio.h>


#define SIZE 5
#define verbose true

using namespace std;
struct queue{
	/* Useing the classic 2 pointer  1 array implementation */
	int head=0;
	int list[SIZE][2];
	int tail=0;
	int token=0;
};

int que(queue &q,int adder){
if(q.head <SIZE){
	q.list[q.head][0] = adder;
	q.list[q.head++][1] = q.token++;

	return 0;
}
else{
		if(verbose){
			printf("No more customers are to be taken !! \n");
	}
	return -1;
}
}

int dequeue(queue &q){
	if (q.head==q.tail){
		printf("No more customers!!\n");
		return -1;
	}
	
	int temp = q.list[q.tail][0];
	q.tail+=1;
	return temp;
} 


void show(queue q){
	int i=q.tail;
	for(;i<q.head;i++){
		printf("%d %d \n",q.list[i][0],q.list[i][1] );
	}
}

int show_total_customer(queue q){
	return q.head -q.tail;
}

int show_people_left_ahead(queue q,int customer){
	// int a=0;
	// bool bol =true;
	// int point=q.head;
	// while(point > q.tail){
	// 	if (q.list[point++][0] ==customer){
	// 		return a;
	// 	}
	// 	a++;
	// }
	// return -1;

	return customer -q.tail ;


}
int main(int argc, char const *argv[])
{
	queue q;
	que(q,5);
	que(q,6);
	que(q,7);
	que(q,8);
	que(q,9);
	que(q,10);
	dequeue(q);

	show(q);
	cout << show_total_customer(q)<<endl;
	cout << show_people_left_ahead(q,3);
	return 0;
}
