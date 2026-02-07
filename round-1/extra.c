// convert int to binary {85-->1010101}
#include <stdio.h>

int main() {
    int num = 85;

    // Special case for 0
    if (num == 0) {
        printf("0");
        return 0;
    }

    int arr[32];
    int i = 0;

    // Collect remainders
    while (num > 0) {
        arr[i] = num % 2;
        num = num / 2;
        i++;
    }

    // Print in reverse (actual binary)
    for (int j = i - 1; j >= 0; j--) {
        printf("%d", arr[j]);
    }

    return 0;
}
