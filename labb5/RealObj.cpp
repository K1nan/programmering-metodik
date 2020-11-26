#include "RealObj.h"

Person::Person(std::string name, double age) :name(name), age(age)
{}

bool Person::operator==(const Person& rhs) const {
    return name == rhs.name;
}
std::string Person::getName() {
    return name;
}

double Person::getAge() const {
    return age;
}

std::ostream& operator << (std::ostream& out, const Person p) {
    out << p.name << "\t" << p.age;
    return out;
}