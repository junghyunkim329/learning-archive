#include <stdio.h>

int n;
int x1[100];
int x2[100];
int arr[202] = {0,};

int main() {
    scanf("%d", &n);    // 선 개수
    for (int i = 0; i < n; i++) {
        scanf("%d %d", &x1[i], &x2[i]);     //선 길이
    }
    
    for (int i = 0; i < n; i++) {
        for (int j = x1[i]; j < x2[i]; j++) {
            arr[(j+100)]++;
        }
    }

    int max = 0;
    for (int i = 0; i < 202; i++) {
        if (arr[i] > max) {
            max = arr[i];
        }
    }

    printf("%d",max);

    return 0;
}