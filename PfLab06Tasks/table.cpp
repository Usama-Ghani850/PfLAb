#include<stdio.h>

int main() {
  int a, b;
  printf("enter the number ");
  scanf("%d", & b);
  for (a = 1; a <= 10; a++) {
    printf("%d\n", b * a);
  }

  return 0;
}
