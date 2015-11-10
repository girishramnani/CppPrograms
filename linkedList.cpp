/*
 * =====================================================================================
 *
 *       Filename:  linkedList.cpp
 *
 *    Description:  my program
 *
 *        Version:  1.0
 *        Created:  Thursday 30 April 2015 06:55:28  IST
 *       Revision:  none
 *       Compiler:  gcc
 *
 *         Author:  YOUR NAME (), 
 *   Organization:  
 *
 * =====================================================================================
 */

#include <cstring>
#include <vector>
#include <list>
#include <map>
#include <set>
#include <deque>
#include <stack>
#include <bitset>
#include <algorithm>
#include <functional>
#include <numeric>
#include <utility>
#include <sstream>
#include <iostream>
#include <iomanip>
#include <cstdio>
#include <cmath>
#include <cstdlib>
#include <ctime>
#include <memory.h>
#include <cassert>

using namespace std;
struct node {
int data;
node * next;
};


node * head = NULL;

void pop(){
 head = head->next;
}
void add(int data){
 if(head==NULL){
head = (node *) malloc(sizeof(node));
head->data = data;
head->next = NULL;
cout << "inside head" << endl;
}
else{
node * temp;
temp = (node *) malloc(sizeof(node));
temp->next = head;
temp->data=data;
head = temp;
} 
}
void view(){

node* s = head;
while(s != NULL){
cout << s->data<<endl;
s = s->next;
}

}

int main ( int argc, char *argv[] )
{
	add(5);
	add(6);
	add(7);
	view();	
	pop();
	view();	
return 0;
}					/* ----------  end of function main  ---------- */

