#include "stack.c"
int input_precidence[50];
int stack_preidence[50];
void _helper(char a,int preci,int o_preci){
	input_precidence[a]=preci;
	stack_preidence[a]=o_preci;
}
void flush(stack &s){
	char c ;
	while((c = pop(s)) != '('){
		printf("%c",c);
	}
}
void define_precidence(){
	for(int a ='a'; a<='z';a++){
		input_precidence[a]=7;
		stack_preidence[a]=8;
	}
	_helper('+',1,2);
	_helper('-',1,2);
	_helper('*',3,4);
	_helper('/',3,4);
	_helper('^',6,5);
	_helper('(',9,0);

}
/*
alternative precidence defination would be to use 
switch case
like 

int precidence(char a){
	switch(a){
	case '+':return 1;
	... on
	}
}
*/

int main(int argc, char const *argv[])
{
	// initialization of stack
	stack st ;
	push(st,'(');
	define_precidence();

	// step2
	char rpolish[100];
	char word[100];
	int t =scanf("%s",word);
	printf("%d\n", t );
	int i =0;
	while(word[i] !='\0'){
		
		if(word[i] >='a' && word[i] <='z'){
			printf("%c",word[i] );
		}
		else{

		 if (word[i]=='('){
			push(st,word[i]);
		}
		else if (word[i]==')'){
			flush(st);


		}
		else{
			push(st,word[i]);
		}
		
	}
	i++;
}
flush(st);

}