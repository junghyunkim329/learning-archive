#include <stdio.h>

void num(int n, int m) {
    int num = 0;
    for (int i = (n > m ? n : m);; i++) {
        if ((i % n) == 0 && (i % m) == 0) {
            printf("%d", i);
            break;
        }
    }
}

int main() {
    int n, m;
    scanf("%d %d", &n, &m);

    num(n, m);

    return 0;
}
