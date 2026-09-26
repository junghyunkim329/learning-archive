#include <stdio.h>
#include <string.h>

int main() {
    char have[5][20] = {"apple", "banana", "grape", "blueberry", "orange"};
    char input;
    int count = 0;

    scanf("%c", &input);

    for (int i = 0; i < 5; i++) {
        for (int j = 2; j < 4; j++) {
            if (input == have[i][j]) {
                printf("%s\n", have[i]);
                count++;
                break;
            }
        }
    }

    printf("%d", count);

    return 0;
}
