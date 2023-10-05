#include <iostream>
#include <cmath>
#include <vector>
#include <algorithm>

using namespace std;

int main() {
    int a, b;
    vector<int> arr;

    cin >> a >> b;
    int sqrtNum = sqrt(a);

    for(int i = 1 ; i < sqrtNum ; i++){
        if(a % i == 0) {
            arr.push_back(i);
            if(a / i != i) 
                arr.push_back(a / i);
        }
    }

    sort(arr.begin(), arr.end());

    int cnt = 0;

    for(int i = 0; i < arr.size(); i++) {
        if(arr[i] >= b && arr[i] % b == 0)
            cnt++;
    }

    cout << cnt << endl;

    return 0;
}
