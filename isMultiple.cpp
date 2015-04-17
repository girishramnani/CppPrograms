#include<stdio.h>
#include<math.h>

int isMultiple3(int num){
	if(num ==0){
		return 1;
	}
	if(num==1){
		return 0;
	}
	int odd=0;
	int even =0;
	while(num !=0){
		odd+=num&1;
		num =num>>1;
		even+= num&1;
		num =num>>1;

	}
	return isMultiple3(abs(odd-even));
}

int main(int argc, char const *argv[])
{
	printf("%d\n",isMultiple3(3) );
	return 0;
}