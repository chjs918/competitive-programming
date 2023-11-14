#include <iostream>
#include <string>
#include <vector>
#include <algorithm>

using namespace std;

int div(int a, int b) {
    if(a % b == 0)
        return a / b;
    else
}

int main() {
    int A, B, C;
    int total = 0;

    cin >> A >> B >> C;
    vector <int> v4{A + B - C, A + B / C, A - B + C, A - B * C, 
                        A - B / C, A * B - C, A * B / C,
                        A / B + C, A / B - C, A / B * C}; 

    int minValue = *min_element(v4.begin(), v4.end());

    if(minValue > 0)  << minValue; 

}
