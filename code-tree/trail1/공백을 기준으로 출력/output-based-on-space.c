#include <stdio.h>

int main() {
    char a[101], b[101];

    fgets(a, 101, stdin);
    fgets(b, 101, stdin);

    for (int i = 0; a[i] != '\n'; i++) {
        if (a[i] != ' ') {
            printf("%c", a[i]);
        }
    }
    for (int i = 0; b[i] != '\n'; i++) {
        if (b[i] != ' ') {
            printf("%c", b[i]);
        }
    }
    return 0;
}
