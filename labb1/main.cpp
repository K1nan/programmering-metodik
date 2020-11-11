#include <iostream>

#include "int_buffer.h"

void f(int_buffer buf);
int main() {
    int_buffer a(5);
    int_buffer b(4);
    a[2];
    b[1];
    b = a;
    for (auto i : b) {
        std::cout << i << std::endl;
    }
    f(int_buffer(10));
    return 0;
}

void f(int_buffer buf) {
    //int number = 1;
    for (int* i = buf.begin(); i != buf.end(); i++) {
        *i = i - buf.begin() +1;
    }
    for (const int* i = buf.begin(); i != buf.end(); i++) {
        std::cout << *i << std::endl;
    }
}