#include <stdio.h>
#include <string.h>

int main() {
    char first[21];
    char second[21];

    scanf("%s", &first);
    scanf("%s", &second);

    if (strlen(first) > strlen(second)) {
        printf("%s %d", first, strlen(first));
    } else if (strlen(first) < strlen(second)) {
        printf("%s %d", second, strlen(second));
    } else {
        printf("same");
    }

    return 0;
}
