#ifndef REALOBJ_H
#define REALOBJ_H

#include <string>
#include <iostream>

class Person {
private:
    std::string name;
    double age;
public:
    Person(std::string name, double age);
    bool operator ==(const Person& rhs) const;

    friend std::ostream& operator << (std::ostream& out, const Person p);

    std::string getName();
    double getAge() const;
};


#endif