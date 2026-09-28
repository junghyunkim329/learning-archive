#include <stdio.h>

void num(int n) {
    int num = 1;

    for (int i = 0; i < n; i++) {
        for (int j = 0; j < n; j++) {
            if (num == 10) {
                num = 1;
            }
            printf("%d ", num);
            num++;
        }
        printf("\n");
    }
}

int main() {
    int N;
    scanf("%d", &N);

    num(N);
    
    return 0;
}
