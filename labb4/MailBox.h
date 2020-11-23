#ifndef MAILBOX_H
#define MAILBOX_H

#include <vector>
#include <algorithm>

#include "Email.h"

class MailBox {
public:
    MailBox(size_t sz);

    void push(const Email& emails);
    Email& operator [](size_t index);

    int size();
    const int size() const;

    void sortWho();
    void sortDate();
    void sortSubject();

private:
    std::vector<Email> email;
};

#endif