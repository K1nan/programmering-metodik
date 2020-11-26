#include "RealObj.h"

#include<iostream>
#include <vector>
#include <algorithm>
#include <numeric> 
#include <random>

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

};

struct MyUnOp
{
public:
    double operator()(const Person& p) {
        return p.getAge();
    }
};

int main() {
    std::random_device device;
    std::mt19937 generator(device());
    std::uniform_int_distribution<int> dist(15, 100);

    Person arr[5] = { Person("Ayham", dist(generator)),
        Person("Osse" , dist(generator)),
        Person("Reza" , dist(generator)),
        Person("Reza" , dist(generator)),
        Person("Reza" , dist(generator))
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
        std::for_each(nameFind, vec.end(), MyClass());
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
    /*auto avarge = std::accumulate(vec.begin(),vec.end(),MyBinOP());
    if(avarge != vec.end()){
        //std::cout << "avarge are " << *avarge << std::endl;
    }*/

    std::cout << "7. tramsform function\n";
    std::vector <double> vec2(vec.size());
    auto trans = std::transform(vec.begin(),vec.end(),vec2.begin(), MyUnOp());
    if (trans != vec2.end()) {
        for_each(trans, vec2.end(), MyClass());
    }
    return 0;
}
