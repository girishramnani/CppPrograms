#include<stdio.h>
#include<malloc.h>

struct node
{
	int data;
	node * nodes[2];
	node * parent;
};

node *head = NULL;


void _heap_add(node** head, int data,node** parent){
	if(*head==NULL){
		(*head) =(node *) malloc(sizeof(node));
		(*head)->data=data;
		for(int i=0;i<2;i++){
			(*head)->nodes[i]=NULL;
		}
		if(parent ==NULL){
		(*head)->parent=NULL;			
		}
		(*head)->parent =*parent;
	}
	else{
		for(int i=0;i<2;i++){
			if((*head)->nodes[i]==NULL){
				_heap_add(&((*head)->nodes[i]),data,head);
				break;
			}
		}
	}
}
void heap_add(node** head,int data){
	node *temp =NULL;
     _heap_add(head,data,&temp);
}
void _heapify_helper(node** selected){
	/*
		helper method that finds the smallest element of the children and makes it the root and then returning the value of the root
	*/




}

void swap(node* node1 , node* node2){
	int temp =node1->data;
	node1->data = node2->data;
	node2->data = temp;

}

void heapify(node* selected){
	if(selected ==NULL){
		return;
	} 
	node * smallest;
	smallest =selected;
	for(int i=0;i<2;i++){
		if(selected->nodes[i] !=NULL ){
		if(smallest->data > selected->nodes[i]->data  ){
			smallest = selected->nodes[i];
		}
	}
}
	if(smallest->data != selected->data){
	printf("swapping %d and %d \n",selected->data,smallest->data );
	printf("%d %p %p\n",smallest->parent->data,&(selected->nodes[1]),&(selected->nodes[0]));
	swap(selected,smallest);
	printf("%p\n",selected->parent );
	swap(selected->parent,smallest->parent);
	// heapify(smallest);
	
	}
	
}


int main(int argc, char const *argv[])
{
	heap_add(&head,8);
	heap_add(&head,6);
	heap_add(&head,5);
	heapify(head);




	return 0;
}