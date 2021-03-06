/*
 * =====================================================================================
 *
 *       Filename:  bubblesort.cpp
 *
 *    Description:  my program
 *
 *        Version:  1.0
 *        Created:  Thursday 30 April 2015 06:47:33  IST
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

void swap(int &a,int &b){
 a= a+b;
b=a-b;
a=a-b;
}

void bubbleSort(int *arr,int size){
for(int i=0;i<size;i++){
for(int j=0;j<size-i-1;j++){
if(arr[j] >arr[j+1]){
swap(arr[j],arr[j+1]);
}
}
}
}

void display(int *arr){
for(int i=0;*(arr+i);i++) cout << arr[i];
}
int main ( int argc, char *argv[] )
{
	int arr[] = {5,4,3,2,1,'\0'};
	bubbleSort(arr,5);
	display(arr);
return 0;
}					/* ----------  end of function main  ---------- */
