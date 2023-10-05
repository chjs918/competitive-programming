#include <iostream>
#include <cmath>

using namespace std;

int main() {
    double r, f;
    int num;

    cin >> r >> f;
    double round1 = f / r - static_cast<int>(f/r);
    if(round1 >= 0.5)
        num = round(f / r);
    else
        num = floor(f / r);

    if(num % 2 == 1)
        cout << "down";
    else
        cout << "up";

}
