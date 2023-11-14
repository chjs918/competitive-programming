#include <iostream>
#include <string>
#include <sstream>
#include <algorithm>
#include <bits/stdc++.h>

using namespace std;

int main() {
    string s, str;
    bool flag = true;

   getline(cin, s);

   // ss is an object of stringstream that references the S string.  
    stringstream ss(s); 
    string word;

    // Use while loop to check the getline() function condition.  
    while (getline(ss, str, ' ')) {
        word = str;
    }

    if(word.find("eh?") != string::npos){
        cout << "Canadian!";
    } else {
        cout << "Imposter!";
    }
}
