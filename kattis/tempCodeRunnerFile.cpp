#include <iostream>
#include <string>
#include <algorithm>
#include <vector>

using namespace std;

int main() {
    long long int num;
    cin >> num;
    vector<long long int> v(num);
    long long int minX;

    for(long long int i = 0 ; i < num ; i++) {
        cin >> v[i];
        if(i != 0 && minX > v[i]) minX = min(v[i - 1], v[i]);
    }

    cout << minX + 1;


}