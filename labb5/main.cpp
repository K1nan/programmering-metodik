#include "RealObj.h"

#include<iostream>
#include <vector>
#include <algorithm>
#include <numeric> 

struct MyClass {
public:
    void operator()(const Person& p) {
        std::cout << p << std::endl;
    }
};
struct find {
public:
    find(const double value) :value(value) {}
    bool operator()(const Person& p) {
        return p.getAge() > value;
    }
private:
    const double value;
};
struct MyBinOP {
public:
    double operator ()(const double p, const Person& rhs) {
        return p + rhs.getAge();
    }
};
struct MyUnOp
{
public:
    double operator()(const Person& p) {
        return p.getAge();
    }
};
struct MyFunc {
public:
    MyFunc(double m) : m(m) {}
    double operator()(double a) {
        return a - m;
    }
private:
    double m;
};

int main() {


    Person arr[5] = { Person("Ayham", 29.1),
        Person("Osse" , 34.1),
        Person("Reza" , 50.1),
        Person("Reza" , 73.3),
        Person("Reza" , 21.1)
    };
    std::vector<Person>vec(arr, arr + 5);
    std::cout << "1. for_Each" << std::endl;
    std::for_each(vec.begin(), vec.end(), MyClass());

    const double value = 35.1;
    std::cout << "2. find the biggest value is " << value << std::endl;

    auto found = std::find_if(vec.begin(), vec.end(), find(value));
    if (found != vec.end()) {
        std::cout << *found << std::endl;
    }
    std::cout << "3. find if there the same name" << std::endl;
    auto nameFind = std::adjacent_find(vec.begin(), vec.end());
    if (nameFind != vec.end()) {
        std::cout << *nameFind << std::endl;
    }
    else {
        std::cout << "not found" << std::endl;
    }

    std::cout << "4. check if it equal\n";
    if (std::equal(vec.begin(), vec.end(), arr)) {
        std::cout << "it is equal" << std::endl;
    }
    else {
        std::cout << "not equal\n";
    }

    std::cout << "5. search function \n";
    auto searched = std::search(vec.begin(), vec.end(), arr, arr + 5);
    if (searched != vec.end()) {
        std::for_each(searched, vec.end(), MyClass());
        //
    }
    else {
        std::cout << "can not find the the element that u are looking for" << std::endl;
    }

    std::cout << "6. avarge value\n";
    auto sum = std::accumulate(vec.begin(), vec.end(), 0.0, MyBinOP());
    double avarge = sum / vec.size();
    std::cout << "avarge are " << avarge << std::endl;
    /*if(avarge != vec.end()){
        //std::cout << "avarge are " << *avarge << std::endl;
    }*/
    std::cout << "7. tramsform function\n";
    std::vector <double> vec2(vec.size());
    std::transform(vec.begin(), vec.end(), vec2.begin(), MyUnOp());
    auto a = [](double d) {
        std::cout << d << std::endl;
    };
    for_each(vec2.begin(), vec2.end(), a);

    std::cout << "8. \n";
    std::transform(vec2.begin(), vec2.end(), vec2.begin(), MyFunc(avarge));
    for_each(vec2.begin(), vec2.end(), a);
    std::cout << "9. \n";
    std::sort(vec2.begin(), vec2.end());
    for_each(vec2.begin(), vec2.end(), a);
    return 0;
}
