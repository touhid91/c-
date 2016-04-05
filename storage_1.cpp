#include <iostream>

void func(void);

static int count = 10;
int extern_i;
extern void write_extern();

main() {
    while (count--)
        func();
    // g++ storage_1.cpp  storage_2.cpp -o storage.o
    extern_i = 25;
    write_extern();
    return 0;

}

void func(void) {
    static int i = 5;

    i++;

    std::cout << "i is " << i;
    std::cout << " and count is " << count << std::endl;

}
