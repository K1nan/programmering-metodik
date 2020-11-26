#include "Email.h"
#include "MailBox.h"

#include <algorithm>

void show(const Email& email);
int main()
{
	MailBox mail(3);
	//lambda function
	auto printMail = [](const Email& email)
	{
		show(email);
	};

	mail[0] = Email("yasdf", "hejbv", "2018-12-13");
	mail[1] = Email("Taima", "Habolh", "2020-11-24");

	mail.push(Email("Ayham", "hej" ,"2018-12-13" ));
	mail.push(Email("Ahmad", "hejsan", "2018-11-14"));
	mail.push(Email("Ayasd", "hasdj", "2014-15-13"));
	mail.sortWho();
	std::cout << "User Sort\n";
	std::for_each(mail.begin(),mail.end(),printMail);
	
	mail.sortDate();
	std::cout << "\nDate Sort\n";
	std::for_each(mail.begin(), mail.end(), printMail);

	mail.sortSubject();
	std::cout << "\nSubject Sort\n";
	std::for_each(mail.begin(), mail.end(), printMail);
}

void show(const Email& email) {
	std::cout << email << std::endl;
}
