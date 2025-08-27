#include "arithmetic.h"

int add(int a, int b) {
    return a + b;
}

int sub(int a, int b) {
    return a - b;
}

int mul(int a, int b) {
    return a * b;
}

int dur(int a, int b) {
    if (b == 0) {
        return 0; // 0으로 나누기 방지
    }
    return a / b;
}