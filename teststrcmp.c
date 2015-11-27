#include <stdio.h>
#include <string.h>

int main(void){
	printf("strcmp(\"apple\", \"banana\"): %d\n",strcmp("apple","banana"));
	printf("strcmp(\"apple\", \"cat\"): %d\n",strcmp("apple","cat"));
	printf("strcmp(\"apple\", \"apple\"): %d\n",strcmp("apple","apple"));
	printf("strcmp(\"cat\", \"apple\"): %d\n",strcmp("cat","apple"));

}