#include <iostream>
#include <string>
#include <algorithm>
#include <vector>
#include <limits.h>

using namespace std;

int main() {
    long long int num;
    cin >> num;
    vector<long long int> v(num);
    long long int minX = LLONG_MAX;

    for(long long int i = 0 ; i < num ; i++) {
        cin >> v[i];
    }

    for(int x = 0 ; x < num ; x++) {
        if(minX > v[x])
            minX = v[x];
    }

    cout << minX + 1;


}