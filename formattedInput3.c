#include <stdio.h>
 // clear empties the input buffer 
 //
 int clear(void)
 {
 		int rc=0;
         while (getchar() != '\n'){
         	rc++;
         }
         return rc;
 }
                 
int main(void){

	int a,b;
 	char c;
	int rc;
	//expect input to be int, int, char
	printf("prompt: ");
	rc=scanf("%d, %d, %c",&a,&b,&c);
	clear();
	while(rc!=3){
		printf("prompt: ");
		rc=scanf("%d, %d, %c",&a,&b,&c);
		clear();
	}
}
