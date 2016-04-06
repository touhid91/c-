#include <iostream>
using namespace std;

class employee {
public:
employee(){
        salary = 10;
        cout<<"cons"<<endl;
}
~employee(){
        cout<<"dest"<<endl;
}
double salary;
};

int main(int argc, char const *argv[]) {
        employee *e;
        employee _e;
        e = &_e;

        cout<<  e->salary<<endl;
        e->salary = 20;
        cout<<  e->salary<<endl;

        return 0;
}
