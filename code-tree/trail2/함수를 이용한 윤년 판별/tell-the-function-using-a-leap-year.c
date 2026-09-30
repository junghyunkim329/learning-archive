#include <stdio.h>
#include <stdbool.h>

bool year(int y) {
    if ((y % 100) == 0 && (y % 400) != 0)
        return false;
    if ((y % 4) == 0)
        return true;
    return false;
}

int main() {
    int y;
    scanf("%d", &y);

    printf("%s", year(y) ? "true" : "false");

    return 0;
}
