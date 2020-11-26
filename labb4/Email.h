#ifndef EMAIL_H
#define EMAIL_H

#include <string>
#include <iostream>

struct CompWhoDateSubject;
struct CompDateWhoSubject;
struct CompSubjectWhoDate;

class Email {
public:
    Email() = default;
    Email(std::string who , std::string subject, std::string date);

    //A friend function of a class is defined outside that class' 
    //scope but it has the right to access all private and protected members of the class. Even though the prototypes 
    //for friend functions appear in the class definition, friends are not member functions.
    friend std::ostream& operator << (std::ostream& rhs, const Email& lhs);
    friend CompWhoDateSubject;
    friend CompDateWhoSubject;
    friend CompSubjectWhoDate;

private:
    std::string who;
    std::string subject;
    std::string date;
};

std::ostream& operator << (std::ostream& rhs, const Email& lhs);

struct CompWhoDateSubject {
    bool operator ()(const Email& rhs, const Email& lhs) const;
};
struct CompDateWhoSubject {
    bool operator ()(const Email& rhs, const Email& lhs) const;
};
struct CompSubjectWhoDate {
    bool operator ()(const Email& rhs, const Email& lhs) const;
};

#endif