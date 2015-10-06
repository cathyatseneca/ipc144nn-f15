#include <stdio.h>
int myFirstFunction(int a, int b);
int function2(int a);
int main(void){
	int x=5;
	int y=6;
	int z=function2(x);
	printf("x = %d\n",x);
	printf("y = %d\n",y);
	printf("z = %d\n",z);
	return 0;
}
int function2(int a){
	int rc=myFirstFunction(a*2,a);
	return rc;
}
int myFirstFunction(int a, int b){
	int rc=a+b;
	return rc;
}
