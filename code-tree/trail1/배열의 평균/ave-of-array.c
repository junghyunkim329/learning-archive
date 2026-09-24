#include <stdio.h>

int main() {
    int arr[2][4];
    float re = 0;
    for (int i = 0; i < 2; i++) {
        for (int j = 0; j < 4; j++) {
            scanf(" %d", &arr[i][j]);
        }
    }

    // 가로 평균
    for (int i = 0; i < 2; i++) {
        re = 0;
        for (int j = 0; j < 4; j++) {
            re += arr[i][j];
        }
        printf("%.1f ", (re / 4));
    }

    printf("\n");

    for (int i = 0; i < 4; i++) {
        re = 0;
        for (int j = 0; j < 2; j++) {
            re += arr[j][i];
        }
        printf("%.1f ", (re / 2));
    }
    printf("\n");
    re = 0;
    for (int i = 0; i < 2; i++) {
        for (int j = 0; j < 4; j++) {
            re += arr[i][j];
        }
    }
    printf("%.1f ", (re / 8));

    return 0;
}
