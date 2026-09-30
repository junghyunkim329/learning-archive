#include <stdio.h>

int a, b;

int prime(int i) {
    if (i == 2 || i == 3) {
        return i;
    }

    for (int j = 2; j < i; j++) {
        if (i % j == 0) {
            return 0;
        }
    }

    return i;
}

int main() {
    int hap = 0;
    scanf("%d %d", &a, &b);

    for (int i = a; i <= b;i++){
        hap += prime(i);
    }

    printf("%d", hap);

    return 0;
}
