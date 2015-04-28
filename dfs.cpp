#include<stdio.h>
#include<malloc.h>
#include<vector>
#include "queue_circular.c"
/* all the structures required */
struct bitvector{
	int set[1000];
};
struct graph{
 	int matrix[1000][1000];
};


bitvector* bitv= (bitvector *) malloc(sizeof(bitvector));   

void add_to_set(int num){
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
	Graph->matrix[vertex_1][vertex_2] =1;
	Graph->matrix[vertex_2][vertex_1]=1;


}


void neighbour(graph * Graph,int data,std::vector<int> &neighborList){
	neighborList.clear();
	printf("inside neighbour\n");
	for(int i =0;i<1000;i++){
		if(Graph->matrix[data][i]!=0){
			neighborList.push_back(i);
		}
	}
}

bool dfs(graph* Graph,int head,int required){
	std::vector<int> stack;
	stack.push_back(head);
	std::vector<int> neigh ;
	add_to_set(head);
	while(! stack.empty()){
		for(auto &num :stack){
			printf("%d ",num );
		}
		printf("\n");
		int data =stack.back();
		stack.pop_back();
		printf("in %d\n",data );
		neighbour(Graph,data,neigh);


		for(auto& num:neigh){
			if(!present(num)){
			printf("neigh %d\n",num );
			stack.push_back(num);
			add_to_set(num);

			}
		}


		printf("\n");		
		
	}


	return false;
}


void dfs1(graph * Graph,int head){
	dfs(Graph,head,NULL);
}



int main(int argc, char const *argv[])
{
	clean();
	graph* bfsgraph = (graph *)malloc(sizeof(graph));
	add(bfsgraph,1,2);
	add(bfsgraph,2,3);
	add(bfsgraph,3,4);
	add(bfsgraph,4,1);
	add(bfsgraph,4,5);
	dfs1(bfsgraph,1);
	/*
				1----2
				|    |
				4----3
				|
				5

	*/


	
	return 0;
}