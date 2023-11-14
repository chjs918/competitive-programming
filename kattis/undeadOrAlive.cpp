#include <iostream>
#include <string>

using namespace std;

int main() {
    string s;

    getline(cin, s);

    bool smile = false, sad = false;

    if(s.find(":)") != string::npos)
        smile = true;
    if(s.find(":(") != string::npos)
        sad = true;

    if(smile && sad)
        cout << "double agent";
    else if(smile && !sad)
        cout << "alive";
    else if(!smile && sad)
        cout << "undead"; 
    else
        cout << "machine";    

    return 0;
}