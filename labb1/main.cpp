#include <iostream>
#include <chrono>
#include <ctime>
#include <vector>

#include "int_buffer.h"
#include "int_sorted.h"

void f(int_buffer buf);
void TimeToSort();
void insertSort();
void print(int_sorted s);
int main() {
    /*int_buffer a(5);
    int_buffer b(4);

    b = a;
    for (auto i : b) {
        std::cout << i << std::endl;
    }
    //f(int_buffer(10));
    for (auto i : a) {
        std::cout << i << std::endl;
    }*/
    //TimeToSort();
    srand(time(NULL));
    //insertSort();
    TimeToSort();
    /*int value = 3;
    int_sorted s(&value, 1);
    int_sorted f(&value, 1);
    s.insert(5);
    print(s);
    s.insert(2 );
    print(s);
    s.merge(f);
    print(f);
    return 0;*/
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
            std::swap(*min_index, *i);
        }
    }
}
void print(int_sorted s) {
    for (const int* j = s.begin(); j < s.end(); j++) {
        std::cout << *j << std::endl;
    }
}
void insertSort() {
    int_sorted in(nullptr, 0);
    for (int i = 0; i < 10; i++) {
        in.insert(rand() );   
    }
    print(in);
}

void TimeToSort() {
    const int size = 400000;
    std::vector<int> numbers(size);
    //int numbers[size];
    //Skapa en source och fyll den med slumptal
    for (int i = 0; i < size; i++) {
        numbers[i] = rand();
    }
    int_buffer _sort(&*numbers.begin(),size);//Skapa en ny buffer utifrån source
    auto start = std::chrono::high_resolution_clock::now();
    int_sorted to_sort(&*numbers.begin(), size);
    
    auto end = std::chrono::high_resolution_clock::now();
    std::chrono::duration<double> elapsed = end - start;
    std::cout << "Merge sort " << elapsed.count() << "s\n";

    _sort = int_buffer(&*numbers.begin(), size);
    auto start1 = std::chrono::high_resolution_clock::now();
    selection_sort(_sort.begin(),_sort.end());
    auto end1 = std::chrono::high_resolution_clock::now();
    std::chrono::duration<double> elapsed1 = end1 - start1;
    std::cout << "Selection sort " << elapsed1.count() << "s\n";
}