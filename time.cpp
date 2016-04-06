#include <ctime>
#include <iostream>

using namespace std;

int main(int argc, char const *argv[]) {
        time_t now = time(0);
        cout << now << &now<< endl;
        return 0;
}
