#include <stdio.h>

int main() {
    int n;

    printf("값을 입력하세요: ");
    scanf_s("%d", &n);

    for (int i = 1; i <= n; i++) {
        for (int j = 0; j < n - i; j++) {
            printf(" ");
        }

        for (int k = 0; k < (2 * i - 1); k++) {
            if (i == n || k == 0 || k == 2 * i - 2) { //셋 중 하나라도 참이면 별, 아니면 빈 칸
                printf("*");
            }
            else {
                printf(" ");
            }
        }
        printf("\n");
    }

    return 0;
}