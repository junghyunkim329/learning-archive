#include <stdio.h>

int main() {
    char input[4][21];

    for (int i = 0; i < 4; i++) {
        scanf("%s", input[i]);
    }

    for (int i = 3; i > -1; i--) {
        printf("%s\n", input[i]);
    }
    return 0;
}
