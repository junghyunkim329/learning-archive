#include <stdio.h>
#include <string.h>

int main() {
    char first[101];
    char second[101];

    scanf("%s ", &first);
    scanf("%s ", &second);

    printf("%d", strlen(first)+strlen(second));

    return 0;
}