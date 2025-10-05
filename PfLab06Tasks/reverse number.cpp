#include<stdio.h>

int main() {
  int r, p = 0, num;
  printf("enter number:");
  scanf("%d", & num);
  while (num != 0) {
    r = num % 10;
    p = r + 10 * p;
    num = num / 10;
  }
  printf("%d", p);

  return 0;
}
