#include <stdio.h>
#include <stdlib.h>
#include "arithmetic.h"

int main(int argc, char *argv[])
{
    // 기본값 설정
    int a = 0;
    int b = 0;

    // 입력값이 있으면 해당 값으로 설정
    if (argc > 1) {
        a = atoi(argv[1]);
    }
    if (argc > 2) {
        b = atoi(argv[2]);
    }

    printf("%d + %d => %d\n", a, b, add(a, b));
    printf("%d - %d => %d\n", a, b, sub(a, b));
    printf("%d * %d => %d\n", a, b, mul(a, b));
    printf("%d / %d => %d\n", a, b, dur(a, b));

    return 0;
}
