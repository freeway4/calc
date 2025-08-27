#ifndef __ARITHMETIC_H__
#define __ARITHMETIC_H__

int add(int a, int b) { return a + b; }
int sub(int a, int b) { return a - b; }
int mul(int a, int b) { return a * b; }
int dur(int a, int b) { 
    if (b == 0) {
        printf("Error: Division by zero is not allowed.\n");
        return 0; // 0으로 나누기 방지
    }
    return a / b; 
}
#endif
