#include <iostream>
#include <string>
#include <algorithm>

using namespace std;

int main() {
    int num;

    cin >> num;

    string team[num], inc[num], dec[num];
    for(int i = 0 ; i < num ; i++) {
        cin >> team[i];
        inc[i] = team[i];
        dec[i] = team[i];
    }

    sort(inc, inc + num);
    sort(dec, dec + num, greater<string>());
/*
    for(int i = 0 ; i < num ; i++) {
        cout << inc[i] << endl;
    }

    for(int i = 0 ; i < num ; i++) {
        cout << dec[i] << endl;
    }
    */

    if(equal(team, team + num, inc)){
        cout << "INCREASING";
    } 
    else if(equal(team, team + num, dec)){
        cout << "DECREASING";
    } else {
        cout << "NEITHER";
    }

    return 0;
}