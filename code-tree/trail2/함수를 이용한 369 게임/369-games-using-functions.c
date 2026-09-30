#include <stdio.h>

int tir(int num) {
    return (num % 3 == 0);
}

int into(int num) {
    while (num > 0) {
        int result = num % 10;
        if (result < 10 && result > 0 && (result % 3 == 0)) {
            return result;
        }
        num /= 10;
    }
    return 0;
}

int main() {
    int a, b;
    int count = 0;
    scanf("%d %d", &a, &b);

    for (int i = a; i <= b; i++) {
        if (tir(i) || into(i)) {
            count++;
        }
    }

    printf("%d", count);
    return 0;
}
