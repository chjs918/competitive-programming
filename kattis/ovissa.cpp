#include <iostream>
#include <string>

using namespace std;

int main() {
    string s;
    int cnt = 0;

    cin >> s;

    for(int i = 0; s[i] != '\0'; i++)
        cnt++;

    cout << cnt;
    
    return 0;
}