#include <stdio.h>
#include <string.h>

int main() {
    char arr[201];
    int count = 0;

    fgets(arr, 201, stdin);

    for (int i = 0; arr[i] != '\n'; i++) {
        if (arr[i] == ' ') {
            continue;
        }
        count++;
    }

    printf("%d", count);

    return 0;
}
