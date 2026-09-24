#include <stdio.h>

int main() {
    int arr[4], n, sum=0, count = 0;
    scanf("%d",&n);
    for(int i = 0;i<n;i++){
        for(int i = 0;i<4;i++){
            scanf("%d",&arr[i]);
            sum += arr[i];
        }
        if((sum/4)>=60){
            printf("pass\n");
            count++;
        } else {
            printf("fail\n");
        }
        sum = 0;
    }
    printf("%d",count);
    return 0;
}