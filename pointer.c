#include <stdio.h>
void f1(int* a, int* b){
	int tmp=*a;
	*a=*b;
	*b=tmp;
}
int main(void){
	int x = 5;
	int y = 6;

	f1(&x, &y);

	printf("x: %d, y: %d\n", x, y);
	return 0;
}