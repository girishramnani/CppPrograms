#include<stdio.h>

#define Length 100
typedef struct stack {
	int location=0;
	char data[Length];
};
int push(stack &s,char a){
	if(s.location>Length){
		return '-1';
	}

	s.data[s.location++] = a;
}
int pop(stack &s){
	if(s.location-1<0){
		return '-1';
	}
	return s.data[--s.location];
}
int peek(stack &s){
	return s.data[s.location-1];
}
