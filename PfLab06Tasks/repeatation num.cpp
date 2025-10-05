#include<stdio.h>

int main() {
  int a = 2, b;
  printf("enter the number (0 for Exit)");
  scanf("%d", & b);
  while (b != 0) {
    printf("%d\n", a + b);
    printf("enter the number");
    scanf("%d", & b);
  }

  return 0;
}
