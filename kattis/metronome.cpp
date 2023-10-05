#include <iostream>

using namespace std;

int main() {
    int N;
    
    cin >> N;

    if(N % 4 == 0) {
        cout << fixed;
        cout.precision(1);
        cout << N / 4.0;
    } else {
        cout << fixed;
        cout.precision(2);
        cout << N / 4.0;
    }
}