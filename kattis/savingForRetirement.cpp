#include <iostream>
#include <string>

using namespace std;

int main() {
    int bCurrent, bRetire, bSave, aCurrent, aSave;
    int aBank, bBank;
    int j = 1;

    cin >> bCurrent >> bRetire >> bSave >> aCurrent >> aSave;

    bBank = (bRetire - bCurrent) * bSave;

    while(bBank >= aBank) {
        aBank = aSave * j;

        if(bBank >= aBank)
            j++;
    }
    //cout << bBank;
    cout << aCurrent + j;
}
