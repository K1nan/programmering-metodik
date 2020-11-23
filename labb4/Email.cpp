#include "Email.h"

Email::Email(std::string _who, std::string _subject, std::string _date) :who(_who), subject(_subject), date(_date)
{}

std::ostream& operator << (std::ostream& rhs, const Email& lhs) {
    rhs << lhs.who << "\t" << lhs.date << "\t" << lhs.subject;
    return rhs;
}

bool CompWhoDateSubject::operator()(const Email& rhs, const Email& lhs) const {
    if (rhs.who < lhs.who) {
        return true;
    }
    else if (rhs.who == lhs.who) {
        if (rhs.date < lhs.date) {
            return true;
        }
        else if (rhs.date == lhs.date) {
            if (rhs.subject < lhs.subject) {
                return true;
            }
        }
    }
    return false;
}
bool CompDateWhoSubject::operator()(const Email& rhs, const Email& lhs) const {
    if (rhs.date < lhs.date) {
        return true;
    }
    else if (rhs.date == lhs.date) {
        if (rhs.who < lhs.who) {
            return true;
        }
        else if (rhs.who == lhs.who) {
            if (rhs.subject < lhs.subject) {
                return true;
            }
        }
    }
    return false;
}

bool CompSubjectWhoDate::operator()(const Email& rhs, const Email& lhs) const {
    if (rhs.subject < lhs.subject) {
        return true;
    }
    else if (rhs.subject == lhs.subject) {
        if (rhs.who < lhs.who) {
            return true;
        }
        else if (rhs.who == lhs.who) {
            if (rhs.date < lhs.date) {
                return true;
            }
        }
    }
    return false;
}