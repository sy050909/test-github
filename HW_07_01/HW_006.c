#include <stdio.h>

int main() {
    int n;

    printf("���� �Է��ϼ���: ");
    scanf_s("%d", &n);

    for (int i = 1; i <= n; i++) {
        for (int j = 0; j < n - i; j++) {
            printf(" ");
        }

        for (int k = 0; k < (2 * i - 1); k++) {
            if (i == n || k == 0 || k == 2 * i - 2) { //�� �� �ϳ��� ���̸� ��, �ƴϸ� �� ĭ
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