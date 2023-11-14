#include <cmath>
#include <iostream>
#include <vector>

using namespace std;

int main() {
    int num; 
    cin >> num;
    
    vector<int> v(num);
    for(int i = 0 ; i < num ; i++) {
        cin >> v[i];
    }

    int sum = 0;
    for(int i = 0 ; i < v.size() ; i++) {
        sum += v[i];
    }

    int k = round(sum / num);
    cout << k;
}