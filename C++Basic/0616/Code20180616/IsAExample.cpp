class Person{};
class Student : public Person{};

void dance(const Person& p){} // anyone can dance
void study(const Student& s){} // only students study

int main(){
    Person p;
    Student s;
    dance(p);
    dance(s);
    // study(p);  // COMPILING ERROR
    study(s);
    return 0;
}