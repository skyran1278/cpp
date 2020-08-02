#include <iostream>
#include <string>

class Energy {
public:
	virtual std::string print() { return std::string("Energy works"); }
	virtual ~Energy() = default;
};

class Electricity : public Energy {
	std::string print() override { return std::string("Electricy works"); }
};

class Heat : public Energy {
	std::string print() override { return std::string("Heat works"); }
};

std::ostream& operator << (std::ostream& out, Energy* e){
	out << e->print();
	return out;
}

using namespace std;

int main()
{
	Energy* e = new Electricity;
	cout << e << endl;
	Energy* h = new Heat;
	cout << h << endl;
	delete e;
	delete h;
	return 0;
}
