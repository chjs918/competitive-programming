#include <iostream>

using namespace std;
int digit(int num) {
    int total = 0;

    while(num != 0) {
        total += num % 10;
        num = num / 10;
    }

    return total;
}
int main() {
    int N;

    while(cin >> N) {
        int i = 11, index;

        if(N == 0) 
            break;
            
        while(1) {
            if(digit(N * i) == digit(N)) {
                index = i;
                break;
            }
        
            i++;
        }

        cout << index << endl;

    }


    return 0;
}
