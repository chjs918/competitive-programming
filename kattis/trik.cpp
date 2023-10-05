#include <iostream>
using namespace std;

bool one = true, two = false, three = false;

void swap() {
    bool temp;

    temp = one;
    one = two;
    two = temp;
}

int main() {
 //   bool one = true, two = false, three = false;
    char index;

    while(cin >> index) {
        if(index == 'A') {
            swap(one, two);
        } else if(index == 'B') {
            swap(two, three);
        } else {
            swap(three, one);
        }
    }

    if(one) cout << 1;
    if(two) cout << 2;
    if(three) cout << 3;

    return 0;
}   