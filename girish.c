#include<stdio.h>
#include<malloc.h>

struct node
{
	int data;
	node *left;
	node *right;
};

void add(node **ptr,int data){
	if (*ptr==NULL){
			node *t = (node *) malloc(sizeof(node)) ;
			t->data = data;
			t->left = NULL;
			t->right = NULL;
			*ptr = t;
	}
	else {
		if ((*ptr)->data >data){	
		add(&((*ptr)->left),data);		
		}
		else {
			add(&((*ptr)->right),data);
		}
	}
}


// void add(node **ptr,int data){
// 	if(*ptr==NULL){
// 		printf("hey\n");
// 		node *t =(node *) malloc(sizeof(node));
// 		t->data  = data;
// 		t->left = NULL;
// 		t->right =NULL;
// 		ptr = &t;
// 	}
// 	printf("%d\n",(*ptr)->data );


// }

void traverse(node *ptr){
if(ptr !=NULL){
	traverse(ptr->left);
	printf("%d\n",ptr->data );
	traverse(ptr->right);
}
}
int min(node *ptr){
	if(ptr->left != NULL){
		ptr = ptr->left;
	}
	return ptr->data;
}

int max(node *ptr){
	if(ptr->right != NULL){
		ptr = ptr -> right;
	}
	return ptr->data;
}

int main(int argc, char const *argv[])
{
	node *ptr =NULL;
	add(&ptr,5);
	add(&ptr,2);
	add(&ptr,1);
	add(&ptr,10);
	traverse(ptr);


}