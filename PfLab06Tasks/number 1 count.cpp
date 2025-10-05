#include <stdio.h>
int main() {
    int num, count = 0;
    printf("Enter a number: ");
    scanf("%d", &num);

    while (num != 0) {
        if (num & 1)  // agar last bit 1 hai
            count++;
        num = num >> 1;  // right shift (agla bit check)
    }

    printf("Total 1 bits = %d\n", count);
    return 0;
}

