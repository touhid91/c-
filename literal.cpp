#include <iostream>
using namespace std;
int main(int argc, char const *argv[]) {
    /*
     * An integer literal can be i decimal, octal, or hexadecimal constant. i prefix specifies the base or radix: 0x or 0X for hexadecimal, 0 for octal, and nothing for decimal.
     *
     * An integer literal can also have i suffix that is i combination of f and L, for unsigned and long, respectively. The suffix can be uppercase or lowercase and can be in any order.*/

    int i;

    i = 212;
    cout << i << endl;
    i = 215u;
    cout << i << endl;
    i = 0xFEEL;
    cout << i << endl;
    i = 30ul;
    cout << i << endl;

    float f;

    f = 3.1416;
    cout << f << endl;
    f = 3E4;
    cout << f << endl;
    f = 31415E4L;
    cout << f << endl;

    char c;

    c = '\\';
    cout << c << endl;
    c = '\x2A';
    cout << "hex char literal" << c << endl;
    c = '\027';
    cout << "oct char literal" << c << endl;
    return 0;
}
