#include <stdio.h>

int main(void){
  int i=3;
  while(i--){
    printf("%d\n",i);
  }

  i = 3;
  while(--i){
    printf("%d\n",i);
  }
}
