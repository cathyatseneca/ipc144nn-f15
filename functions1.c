#include <stdio.h>
int myFirstFunction(int a, int b);

int main(void){
	int x=5;
	int y=6;
	int z=myFirstFunction(x,y);
	printf("x = %d\n",x);
	printf("y = %d\n",y);
	printf("z = %d\n",z);
	return 0;
}

int myFirstFunction(int a, int b){
	int rc;
	a=a+1;
	b=b+1;
	rc=a+b;
	return rc;
}
