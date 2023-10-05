#include <iostream>
#include <string>

using namespace std;

int main() {
    string name;
    int A, B, C;

    getline(cin, name);

    cin >> A;
    cin >> B;
    cin >> C;

    if(A - B == -C)
        cout << "SITH";
    else if(A - B == C && A < B)
        cout << "JEDI";
    else if(A - B == C && A > B)
        cout << "VEIT EKKI";

    return 0;
}
    

