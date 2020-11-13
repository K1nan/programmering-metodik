#include <iostream>
#include <chrono>

#include "int_buffer.h"
#include "int_sorted.h"

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
//find the min element and put in the begining
void selection_sort(int* begin, int* end) {
    
    for (int* i = begin; i != end ; i++) {
        int* min_index = i;
        for (int* j = i ; j != end; j++) {
            if (*j < *min_index) {
                min_index = j;
            }
        }
        if (min_index != i) {
            std::swap(min_index, i);
        }
    }
}

void TimeToSort() {
    const int size = 400000;
    int numbers[size];

    for (int i = 0; i < size; i++) {
        numbers[i] = rand();
    }
    int_buffer _sort(numbers,size);
    auto start = std::chrono::high_resolution_clock::now();
    int_sorted to_sort(numbers, size);
    
    auto end = std::chrono::high_resolution_clock::now();
    std::chrono::duration<double> elapsed = end - start;
    std::cout << "Merge sort" << elapsed.count() << "s\n";
    
}