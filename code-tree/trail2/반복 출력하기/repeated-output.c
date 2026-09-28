#include <stdio.h>

void print(int num) {
    for (int i = 0; i < num; i++) {
        printf("12345^&*()_\n");
    }
}

int main() {
    int row_num;
    scanf("%d", &row_num);
    print(row_num);
    return 0;
}