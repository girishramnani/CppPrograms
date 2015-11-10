/*
 * =====================================================================================
 *
 *       Filename:  merge_sort.cpp
 *
 *    Description:  my program
 *
 *        Version:  1.0
 *        Created:  Thursday 30 April 2015 06:00:50  IST
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

void display(int *arr){
for(int i=0;*(arr+i);i++) cout << arr[i]<<endl;
}
void merge(int *arr,int low,int mid,int high){
int c[50],a,b,d;
a =low;
b=high;
int i=low;
int j=mid;
d=low;
while(i <=mid && j<=high ){
if(arr[i] <arr[j]){
c[d++] = arr[i++];
}
else{
c[d++] = arr[j++];
}
}
while(i<=mid){
c[d++] =arr[i++];
}
while(j<=high){
c[d++] = arr[j++];
}
for(int i=low;i<d;i++){
arr[i]=c[i];
}
display(arr); 
}


void  _mergeSort(int *arr,int size,int low,int high){

if(low>=high){
return ;
}
int mid = (low+high)/2;
_mergeSort(arr,size,low,mid);
_mergeSort(arr,size,mid+1,high);
cout << "low"<<low <<"mid" <<mid <<"high" << high <<endl;
merge(arr,low,mid+1,high);
}
void mergesort(int *arr,int size){
	_mergeSort(arr,size,0,size);
}


int main ( int argc, char *argv[] )
{
	int arr[5];
	arr[0] =5;
	arr[1]=4;
	arr[2]=3;
	arr[3]=2;
	arr[4]=1;
	mergesort(arr,5);
	for(int i=0;i<5;i++){
	cout << arr[i] <<endl;
}
	return 0;
}					/* ----------  end of function main  ---------- */

