#include "MailBox.h"

MailBox::MailBox(size_t sz) :email(sz)
{}

void MailBox::push(const Email& emails)
{
    email.push_back(emails);
}

Email& MailBox::operator[](size_t index)
{
    return email[index];
}

int MailBox::size()
{
    return email.size();
}

const int MailBox::size() const
{
    return email.size();
}



void MailBox::sortWho() {
    //CompWhoDateSubject comp;
    std::sort(email.begin(), email.end(), CompWhoDateSubject());
}
void MailBox::sortDate() {
    //CompWhoDateSubject comp;
    std::sort(email.begin(), email.end(), CompDateWhoSubject());
}
void MailBox::sortSubject() {
    //CompSubjectWhoDate comp;
    std::sort(email.begin(), email.end(), CompSubjectWhoDate());
}