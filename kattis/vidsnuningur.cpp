#include <iostream>
#include <string>
#include <algorithm>

using namespace std;

int main() {
    string word;
    cin >> word;
    reverse(word.begin(), word.end());
	cout << word;
	return 0;
}