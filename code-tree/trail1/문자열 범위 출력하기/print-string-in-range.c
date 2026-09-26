#include <stdio.h>

int main() {
    char a[101];
    int i = 2, max = 10;

    fgets(a, 101, stdin);

    // if (a[2] == '\0') {
    //     i = 3;
    //     max = 10;
    // }

    for (; i < max; i++) {
        printf("%c", a[i]);
    }
    return 0;
}
