#ifndef PERSON_H
#define PERSON_H

#include <string>

struct Person {
	void setName(const std::string& s){ name = s; }
	void setAge(unsigned num){ age = num; }
	std::string getName() const { return name; } // later note
	unsigned getAge() const { return age; }
	std::string name;
	unsigned age;
};

#endif
