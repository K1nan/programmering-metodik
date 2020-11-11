#ifndef INT_BUFFER_H
#define INT_BUFFER_H

#include <cstdlib>
#include <string>
#include <iostream>

class int_buffer {
public:
    //explicit it use to avoid unexpected result becouse without explicit the constructor will allows conversion of single argumment to the class being constructed
    explicit int_buffer(size_t size); // size_t is defined in cstdlib

    int_buffer(const int* source, size_t size);

    //copy constructor is a member function which initializes an object using another object of the same class and it use l-value
    int_buffer(const int_buffer& rhs); // copy construct

    //move constructor just makes the pointer of the declared object to point to the data of temporary object and nulls out the pointer of the temporary objects. 
    //Thus, move constructor prevents unnecessarily copying data in the memory. and it use r-value
    int_buffer(int_buffer&& rhs); // move construct

    int_buffer& operator =(const int_buffer& rhs); // copy assign

    int_buffer& operator =(int_buffer&& rhs); // move assign


    int& operator [](size_t index);
    const int& operator [](size_t index) const;

    size_t size() const;
    int* begin();
    int* end();
    const int* begin() const;
    const int* end() const;
    ~int_buffer();
private:
    size_t _size = 0;
    int* _pointer = nullptr;
};
#endif