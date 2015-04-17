#include<cstdio>
#include<iostream>

using namespace std;

bool binsearch(int array[],int data,int low,int high){

	if(high <low){
		return false;
	}
	int mid = (low+high)/2;
	if (array[mid] == data ){
		return true;
	}
	else if(array[mid] > data){
		return binsearch(array,data,low,mid -1);
	} 
	else {
		return binsearch(array,data,mid+1,high);	
	}


}

bool binsearch(int array[],int data){
	int size = sizeof(array);
	cout <<"size :" <<size<<endl; 
	return binsearch(array,data,0,size);
}


int main(int argc, char const *argv[])
{
	int array[] ={2,3,4,5,6,7,8};
	cout << binsearch(array,7);
	return 0;
}