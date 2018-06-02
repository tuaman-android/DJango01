#include <stdio.h>

int main(){
  int i = 0;
  int sum = 1;
  for(i=1; i<101; i++){
    sum *= i;
  }
  print("%d\n", sum);
  return 0
}
