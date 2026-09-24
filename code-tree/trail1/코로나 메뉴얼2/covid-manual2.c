#include <stdio.h>

int main() {
    char aya[3];
    int che_on[3] = {0}, count[5] = {0}, check = 0;
    for (int i = 0; i<3; i++) {
        scanf(" %c %d",&aya[i],&che_on[i]);
        if(che_on[i] >= 37) {
            if (aya[i] == 'Y') {
                count[1]++;//A
                check++;
            } else {
                count[2]++;//B
            }
        } else if (aya[i] == 'Y') {
            count[3]++;//C
        } else {
            count[4]++;//D
        }
    }
    for (int t = 1; t<5;t++){
        printf("%d ", count[t]);
    }
    if (check>1){
        printf("E");
    }
    return 0;
}