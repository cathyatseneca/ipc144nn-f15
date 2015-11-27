#include <string.h>
#include <stdio.h>

int main(void){
	printf("strcmp(\"apple\", \"lichee\") == %d\n", strcmp("apple","lichee"));
	printf("strcmp(\"lichee\", \"apple\") == %d\n", strcmp("lichee","apple"));
	printf("strcmp(\"apple\", \"apple\") == %d\n", strcmp("apple","apple"));
}
