#include <stdio.h>

int main() {
    int n = 0;
    int pn = 1;
    
    printf("숫자를 입력하세요: ");
    
    scanf_s("%d", &n);

    printf("\n%d이하의 소수 출력\n\n", n);
    int i;
    int j;
    int cnt = 0;

    for (j = 2; j <= n; j++) {
        for (i = 2; i < j; i++) {
            if (j % i == 0) {
                pn = 0;
                break;
            }
            else pn = 1;
        }
        if (pn == 1) {
            printf("%d\t", j);
            cnt++;
            if (cnt == 5) {
                printf("\n");
                cnt = 0;
            }
        }
    }
    return 0;
}