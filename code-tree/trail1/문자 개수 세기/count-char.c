#include <stdio.h>

int main() {
    char line[101];
    char a;
    int count = 0;

    fgets(line, 101, stdin);
    scanf("%c", &a);

    for (int i = 0; line[i] != '\n'; i++) {
        if (a == line[i]) {
            count++;
        }
    }

    printf("%d", count);

    return 0;
}
