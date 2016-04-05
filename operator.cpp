#include <iostream>
using namespace std;

main(){
    int i = 0b00111100;

    int ls = i << 2;
    int rs = i >> 2;

    cout << ls << "-" << i << "-" << rs << endl;

    return 0;
}
