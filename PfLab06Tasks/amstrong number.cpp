#include<stdio.h>

int main() {
  int r, p = 0, num, a;
  printf("enter number");
  scanf("%d", & num);
  a = num;
  while (num != 0) {
    r = num % 10;
    p = (r * r * r) + p;
    num = num / 10;
  }
  if (a == p) {
    printf("%d is amstrong number\n", a);
  } else {
    printf("the number is not an amstrong number");
  }

  return 0;
}
