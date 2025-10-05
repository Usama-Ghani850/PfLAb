#include<stdio.h>

int main() {
  int a = 1, b=0;
  printf("enter number");
  scanf("%d", &b);
  while (b != 0) {
    a = b * a;
    --b;
    
  } printf("%d", a);
  return 0;
}
