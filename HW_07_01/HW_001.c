#include <stdio.h>
#define _CRT_SECURE_NO_WARNINGS

int main() {
    float num1, num2, num3, num4, num5;
    float max, min, average;

    printf("첫번째 실수를 입력하시오. ");
    scanf_s("%f", &num1);
    printf("두번째 실수를 입력하시오. ");
    scanf_s("%f", &num2);
    printf("세번째 실수를 입력하시오. ");
    scanf_s("%f", &num3);
    printf("네번째 실수를 입력하시오. ");
    scanf_s("%f", &num4);
    printf("다섯번째 실수를 입력하시오. ");
    scanf_s("%f", &num5);
    //5개의 실수 입력하기

    max = num1;
    min = num1;
    average = (num1 + num2 + num3 + num4 + num5) / 5;

    if (num2 > max) {
        max = num2;
    }
    if (num2 < min) {
        min = num2;
    }
    if (num3 > max) {
        max = num3;
    }
    if (num3 < min) {
        min = num3;
    }
    if (num4 > max) {
        max = num4;
    }
    if (num4 < min) {
        min = num4;
    }
    if (num5 > max) {
        max = num5;
    }
    if (num5 < min) {
        min = num5;
    }
    // 최대값 최소값 구하기

    printf("최대값: %f\n", max);
    printf("최소값: %f\n", min);
    printf("평균값: %f\n", average);
    // 결과 출력하기

    return 0;
}
