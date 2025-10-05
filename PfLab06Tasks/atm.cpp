#include<stdio.h>

int main() {
  int bal = 50000, wit;
  printf("how much amount did yo want to withdraw ");
  scanf("%d", & wit);
  while (wit <= bal && bal != 0) {
    printf("succesful with draw\n");
    bal = bal - wit;
    printf("remaining balance is %d\n", bal);
    printf("how much amount did yo want to withdraw ");
    scanf("%d", & wit);
  }
  printf("amount exeeded");

  return 0;
}
