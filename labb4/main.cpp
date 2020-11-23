#include "Email.h"
#include "MailBox.h"

void show(const Email& email);
int main()
{
	MailBox m(3);
	m[0] = Email("yasdf", "hejbv", "2018-12-13");

	m.push(Email("Ayham", "hej" ,"2018-12-13" ));
	m.push(Email("Ahmad", "hejsan", "2018-11-14"));
	m.push(Email("Ayasd", "hasdj", "2014-15-13"));
	m.sortWho();
	for (int i = 0; i < m.size(); i++) {
		show(m[i]);
	}
}

void show(const Email& email) {
	std::cout << email << std::endl;
}
