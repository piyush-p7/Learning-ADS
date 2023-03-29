#include <stdio.h>

int main() {
    int data = 0;
    printf("Enter the number: ");
    scanf("%d", &data);

    int sign = (data >> (sizeof(int) * 8 - 1)) & 1;
    if (sign == 0) {
        printf("The number is positive or zero.\n");
    } else {
        printf("The number is negative.\n");
    }

    return 0;
}
