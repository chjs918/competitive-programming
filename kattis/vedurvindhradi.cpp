#include <iostream>
#include <string>

using namespace std;

int main() {
    double num;

    cin >> num;

    if(num >= 32.7) {
        cout << "Farvidri";
    } else if (num >= 28.5) {
        cout << "Ofsavedur";
    } else if (num >= 24.5) {
        cout << "Rok";
    } else if (num >= 20.8) {
        cout << "Stormur";
    } else if (num >= 17.2) {
        cout << "Hvassvidri";
    } else if (num >= 13.9) {
        cout << "Allhvass vindur";
    } else if (num >= 10.8) {
        cout << "Stinningskaldi";
    } else if (num >= 8.0) {
        cout << "Kaldi";
    } else if (num >= 5.5) {
        cout << "Stinningsgola";
    } else if (num >= 3.4) {
        cout << "Gola";
    } else if (num >= 1.6) {
        cout << "Kul";
    } else if (num >= 0.3) {
        cout << "Andvari";
    } else {
        cout << "Logn";
    }

    return 0;
}