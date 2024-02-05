#include <stdio.h>

int main(void) {
  int fibN;
  
  printf("Enter Fibonacci n: ");
  scanf("%d", &fibN);
  
  int holder = 1;
  int holder2 = 1;
  int holder3 = 0;

  printf("%d ", holder);

  for(int i = 1; i <= fibN; i++){

    holder3 = holder + holder2;
    holder = holder2;
    holder2 = holder3;
    printf("%d ", holder3);
    
  }
  
  return 0;
}