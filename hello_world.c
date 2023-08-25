#include <stdio.h>

void greet(int n);

int main(int argc, char** argv){
  
  int n = 5;
  greet(n);
  return 0;
}

void greet(int n){
  
  for (int i = 0; i < n; i++){
  
    printf("Hello, world!\n");

  }

}
