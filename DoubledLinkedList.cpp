#include<stdio.h>

#include<malloc.h>


struct node
{
	node *before;
	int data;
	node *next;
};

node * head ;

void push(int data){
	if(head ==NULL){
	head = 	(node *) malloc(sizeof(node));
	head->data = data;
	}
	else{
		node * temp = (node *) malloc(sizeof(node));
		temp = head;
		head=(node *) malloc(sizeof(node));
		head->data = data;
		head->next = temp;
		temp->before = head;


	}

}
int pop(){
	int head_val = head->data;
	head = head->next;
	return head_val;
}

int main(int argc, char const *argv[])
{
	push(5);
	push(6);
	push(7);
	return 0;
}