#include <cmath>
#include <iostream>
#include <vector>

using namespace std;

int main() {
    int num;
    char c;
    int D, H, M, totalM = 0;

    cin >> num;

    for(int i = 0 ; i < num ; i++) {
        cin >> c >> D >> H >> M;
        totalM = 60 * H + M;

        if(c == 'F') {
            totalM += D;
        } else if(c == 'B') {
            totalM -= D;
        }

        if(totalM > 1440) {
            totalM -= 1440;
        } else if(totalM < 0) {
            totalM += 1440;
        }

        int newH = totalM / 60;
        int newM = totalM % 60;

        if(newH == 24) newH = 0;
        
        cout << newH << " " << newM << endl;
    }
}