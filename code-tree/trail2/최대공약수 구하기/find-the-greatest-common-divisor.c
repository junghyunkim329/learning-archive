#include <stdio.h>

void max(int n, int m) {
    int num = 0;
    for (int i = 1; i <= (n > m ? m : n); i++) {
        if (n % i == 0 && m % i == 0) {
            num = i;
        }
    }
    printf("%d", num);

}

int main() {
    int n, m;
    scanf("%d %d", &n, &m);

    max(n, m);

    return 0;
}
