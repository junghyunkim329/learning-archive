#include <stdio.h>
#include <string.h>

int main() {
    char arr[3][21];
    int max = 0, min = 0;

    for (int i = 0; i < 3; i++) {
        scanf("%s", arr[i]);
    }

    // max
    if (strlen(arr[0]) > strlen(arr[1]) && strlen(arr[0]) > strlen(arr[2])) {
        max = strlen(arr[0]);
    } else if (strlen(arr[1]) > strlen(arr[0]) && strlen(arr[1]) > strlen(arr[2])) {
        max = strlen(arr[1]);
    } else {
        max = strlen(arr[2]);
    }

    // min
    if (strlen(arr[0]) < strlen(arr[1]) && strlen(arr[0]) < strlen(arr[2])) {
        min = strlen(arr[0]);
    } else if (strlen(arr[1]) < strlen(arr[0]) && strlen(arr[1]) < strlen(arr[2])) {
        min = strlen(arr[1]);
    } else {
        min = strlen(arr[2]);
    }
    
    printf("%d", (max-min));

    return 0;
}
