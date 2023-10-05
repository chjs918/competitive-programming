#include <iostream>
#include <string>

using namespace std;

int main() {
    int N;
    int total = 0;

    cin >> N;

    string k[N];

    for(int i = 0 ; i < N ; i++) {
        cin >> k[i];
    }
    
    int num = -1;

    for(int i = 0 ; i < N ; i++) {
        for(int j = 0 ; j < k[i].size() ; j++) {
            if(k[i].at(j) == 'D'){
                num = j + 1;
                if(k[i].at(num) == 'C')
                    total++;
            }
        }
    }

    cout << total;

    return 0;
}