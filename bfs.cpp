#include<stdio.h>
#include<malloc.h>
#include "queue_circular.c"
/* all the structures required */
struct bitvector{
	int set[1000];
};
struct graph{
 	int matrix[1000][1000];
};


bitvector* bitv= (bitvector *) malloc(sizeof(bitvector));   

void add(int num){
	bitv->set[num/32] = bitv->set[num/32] | (1 << num%32);
}

bool present(int num){
	return (bitv->set[num/32] >> num%32) & 1 ;

}

void clean(){
	for(int i=0;i<1000;i++){
		bitv->set[i]=0;
	}
}

void add(graph* Graph,int vertex_1 , int vertex_2){
	Graph->matrix[vertex_1][vertex_2] = 1;
	Graph->matrix[vertex_1][vertex_2]=1;


}

bool bfs(graph* Graph,int head,int required){
	queue queue1 ;
	queue1.head=0;
	queue1.tail =0;
	que(queue1,head);
	while(! empty((queue1))){

		
		
	}
	printf("%d \n",empty(queue1));



	return false;
}
void bfs(graph * Graph,int head){
	bfs(Graph,head,NULL);
}



int main(int argc, char const *argv[])
{
	clean();
	graph* bfsgraph = (graph *)malloc(sizeof(bfsgraph));
	bfs(bfsgraph,1,2);
	
	return 0;
}