#include <iostream>

unsigned long long F0 = 0, F1 = 1;

unsigned long long fib() {
    F0 = F0 + F1;
    F1 = F0 - F1;
    return F0;
}

void resetFib() {
    F0 = 0;
    F1 = 1;
}

int main() {
    for (int i = 0; i < 10; ++i) {
        std::cout << F0 << std::endl;
    }
    return 0;
}
