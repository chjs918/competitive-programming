#include <iostream>
#include <string>

using namespace std;
long int concat(long int a, long int b)
{
  
    string s1 = to_string(a);
    string s2 = to_string(b);
  
    string s = s1 + s2;
  
    long int c = stoll(s);
  
    return c;
}

int main() {
    long int L, R, sum = 0;

    cin >> L >> R;

    while(L < R) {
        sum = concat(sum, L);
        L++;
    }

    sum = concat(sum, R);

    cout << sum % 9;
}