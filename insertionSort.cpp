/*
 * =====================================================================================
 *
 *       Filename:  insertionSort.cpp
 *
 *    Description:  my program
 *
 *        Version:  1.0
 *        Created:  Thursday 30 April 2015 06:39:06  IST
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
for (int i=0;*(arr+i);i++){
 cout << arr[i] <<endl;
}
cout <<endl;
}
void swap(int &a,int &b){
a = a+b;
b=a-b;
a=a-b;
}
void insertionSort(int *arr,int size){
for(int i=1;i<size;i++){
for(int j=i;j>=0 && arr[j]<arr[j-1];j--){
cout << "swapping "<< arr[j] <<" " <<arr[j-1] <<endl;
swap(arr[j],arr[j-1]);
}
}
}

int main ( int argc, char *argv[] )
{
	int arr[] ={5,4,3,2,1};
	insertionSort(arr,5);
	display(arr);
	return 0;
}					/* ----------  end of function main  ---------- */

