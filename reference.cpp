#include <iostream>
#define SIZE 4

using namespace std;

int A[SIZE] = {1,2,3,4};

int& updateAtIndex(int i){
        return A[i];
}

void printArray(){
        int _ = 0;
        for(;; ) {
                if(_==SIZE)
                        break;
                cout<<A[_]<<endl;
                _++;
        }
}

int main(int argc, char const *argv[]) {
        printArray();
        updateAtIndex(0) = 5;
        printArray();

        return 0;
}
