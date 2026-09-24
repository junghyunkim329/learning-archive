#include <stdio.h>

int main() {
    int a_n, b_n;
    scanf("%d %d", &a_n, &b_n);

    int a_arr[a_n], b_arr[b_n];
    for (int i = 0; i < a_n; i++) {
        scanf("%d", &a_arr[i]);
    }
    for (int i = 0; i < b_n; i++) {
        scanf("%d", &b_arr[i]);
    }

    int check[b_n];
    int check_n = 0;
    for (int i = 0; i < a_n; i++) {
        if (a_arr[i] == b_arr[0]){
            check[check_n] = i;
            check_n++;
        }
    }

    int result = 0;
    for (int j = 0; j < check_n; j++){
        for (int i = 0; i < b_n; i++) {
            if (b_arr[i] != a_arr[check[j] + i]) {
                result++;
                break;
            }
        }
    }
    
    if (result > (check_n - 1) || check_n == 0) {
        printf("No");
    } else {
        printf("Yes");
    }

    // if (result <= check_n ) {
    //     printf("Yes");
    // } else {
    //     printf("No");
    // }

    return 0;
}