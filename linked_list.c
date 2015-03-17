#include<stdio.h>
#include<malloc.h>
struct node
{
	int val;
	node *nodeptr;
};
node *head=(node*) malloc(sizeof(node));
bool head_flag=false;
int add(int a){
	if (!head_flag){
		head->val = a;
		head_flag=true;
	}
	else{
		node *temp = (node*) malloc(sizeof(node));
		temp = head;
		head =(node*) malloc(sizeof(node));
		head->val=a;
		head->nodeptr = temp;
	}
}
int pop(){
	int head_val = head->val;
	head = head->nodeptr;
	return head_val;
}
int main(int argc, char const *argv[])
{
	add(1);
	add(2);
	add(3);
	add(4);

	printf("%d\n", pop());
	printf("%d\n",pop() );
	printf("%d\n",pop() );
	return 0;
}