#include <stdio.h>

int fr(int arr[], int a) {
    printf("%d\n",arr[a-1]);
    return 0;
}

int se(int arr[], int n, int b) {
    int check = 0;
    int i = 0;
    for (; i<n; i++){
        if(arr[i] == b) {
            check++;
            break;
        }
    }
    if (check == 0) {
        printf("0\n");
    } else {
        printf("%d\n",i+1);
    }
    return 0;
}

int th(int arr[], int s, int e) {
    for (int i = s-1;i<e;i++){
        printf("%d ",arr[i]);
    }
    printf("\n");
    return 0;
}


int main() {
    int n, q;
    scanf("%d %d", &n, &q);

    // n
    int n_arr[n];
    for(int i = 0; i<n; i++){
        scanf("%d",&n_arr[i]);
    }

    //q
    int choice = 0;
    int one, two;
    for (int i = 0; i < q; i++){
        scanf("%d", &choice);
        switch (choice) {
            case 1 :
            scanf(" %d", &one);
            fr(n_arr, one);
            break;
            case 2 :
            scanf(" %d", &one);
            se(n_arr, n, one);
            break;
            case 3 :
            scanf(" %d %d", &one, &two);
            th(n_arr, one, two);
            break;
        }
    }
    return 0;
}