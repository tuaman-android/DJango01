#include <stdio.h>

int multiple(x, y){
	return x*y;
}

int main(){
  int x=2,y=9;
  int result=0;
  result=multiple(x,y);
  printf("%d", result);
  return 0
}
