#include <iostream>
#include <sstream>
#include <string>
#include <vector>
#include <stdlib.h>

using namespace std;

int main() {
    string s;

    while(getline(cin, s)) {
        istringstream ss (s);
        string subs1;
        vector<string> v;
        
        while(getline(ss, subs1, ' ')){
            v.push_back(subs1);
        }

        for(int i = 0 ; i < 3 ; i++){
            cout << v[i] << " ";
        }

        istringstream ss2 (v[3]);
        string subs2;
        int sHour, sMin; int x = 0;
        while(getline(ss2, subs2, ':')) {
            if(x == 0) sHour = stoi(subs2);
            else sMin = stoi(subs2);
            x++;
        }

        istringstream ss3 (v[4]);
        string subs3;
        int fHour, fMin; x = 0;
        while(getline(ss3, subs3, ':')) {
            if(x == 0) fHour = stoi(subs3);
            else fMin = stoi(subs3);
            x++;
        }

        if(sMin > fMin) {
            fHour--;
            fMin += 60;
        }

        cout << fHour - sHour << " hours " << fMin - sMin << " minutes" << endl;
    }
    
}