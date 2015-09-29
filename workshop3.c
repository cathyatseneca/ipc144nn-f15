#include <stdio.h>

int main(void){
	int sin;

	printf("Please enter a sin number: ");
	scanf("%d",&sin);

	while (sin != 0){
		printf("%d is validated!\n", sin);
		printf("Please enter a sin number: ");
		scanf("%d",&sin);
	}


	return 0;
}