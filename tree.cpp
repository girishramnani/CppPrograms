#include<stdio.h>
#include<malloc.h>


struct node{
	int data;
	node* left;
	node* right;
};

node* head =NULL;


void add(node* &head,int data){
	if(head ==NULL){
		head =(node *) malloc(sizeof(node));
		head->data = data;
		head->left = NULL;
		head->right =NULL;
	}
	else if(head->data < data){
		add(head->right,data);
	}
	else{
		add(head->left,data);
	}
}

void inorder(node * head){
	if(head !=NULL){
		inorder(head->left);
		printf("%d\n",head->data );
		inorder(head->right);
	}
}



int main(int argc, char const *argv[])
{
	add(head,5);
	add(head,6);
	add(head,4);
	add(head,3);
	inorder(head);

	return 0;
}