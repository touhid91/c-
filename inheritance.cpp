#include <iostream>
using namespace std;

class Person {
protected:
string name;
int age;
public:
// Person(string, int);
string printAge(void);
};

// Person::Person(string n, int a){
//   name = n;
//   age = a;
// }

string Person::printAge(void){
        cout<<name<<" is now "<<age<<endl;
}

class FPornstar : public Person {
public:
double boobSize;
char cupSize;
FPornstar(string, int);
bool isSexy(void);
};

FPornstar::FPornstar(string name, int age){
        name = name;
        age = age;
}

bool FPornstar::isSexy(void){
        return boobSize > 34 && cupSize > 'B';
}

int main(int argc, char const *argv[]) {
        FPornstar f("Madison Ivy", 27);
        f.boobSize = 38;
        f.cupSize = 'C';
        std::cout << f.isSexy() << std::endl;
        return 0;
}
