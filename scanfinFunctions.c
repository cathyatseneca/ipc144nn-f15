#include <stdio.h>
void read(int* a,int* b,int* c);

int main(void){
	int w;
	int x,y,z;
	printf("prompt: ");
	scanf("%d",&w);
	read(&x,&y,&z);
	printf("w: %d ,x: %d, y: %d, z: %d\n",w,x,y,z);
}
void read(int* a,int* b,int* c){
	printf("prompt x: ");
	scanf("%d",a);
	printf("prompt y: ");
	scanf("%d",b);
	printf("prompt z: ");
	scanf("%d",c);

}