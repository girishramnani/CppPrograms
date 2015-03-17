#include<stdio.h>
#include<string.h>
bool strlonger(char *s, char *t) {
	printf("%d\n",strlen(s) );
	unsigned t2 = strlen(s) -strlen(t) ;
	return t2>0;
}
int main(int argc, char const *argv[])
{
	printf("%d\n",strlonger("giri","ramnanii") );
	return 0;
}