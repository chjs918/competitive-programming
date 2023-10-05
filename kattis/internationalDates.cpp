#include <iostream>
#include <string>

using namespace std;

int main() {
    string YMD;

    bool EUFlag = false;
    bool USFlag = false;

    cin >> YMD;

    string A = YMD.substr(0, 2);
    string B = YMD.substr(3, 2);
    string year = YMD.substr(6, 4);

    int A1 = stoi(A);
    int B1 = stoi(B);
    //int year1 = stoi(year);

    if(A1 > 12)
        EUFlag = true;
    if(B1 > 12)
        USFlag = true;
    
    if(!EUFlag && !USFlag)
        cout << "either";
    else if(EUFlag && !USFlag)
        cout << "EU";
    else if(USFlag && !EUFlag)
        cout << "US";

    return 0;
}
