#include <iostream>
#include <string>
#include <vector>

using namespace std;

int main() {
    int num;

    cin >> num;
    
    string s;
    vector<int>word(45);
    vector<int>cnt(45);

    for(int i  = 0 ; i < num; i++) {
        cin >> s;
        for(int j = 0 ; j < s.length(); j++) {
            int value = s[j];
            word[j] += value;
            cnt[j]++;
        }
    }

    for(int i  = 0 ; i < 45; i++) {
        if(cnt[i] != 0) {
            char ch = word[i] / cnt[i];
            cout << ch;
        }
    }

    /*
    for(int i = 0 ; i < num; i++) {
        for(int j = 0; j < maxL; j++) {
            if(s[i].at(j)) {
                //sum[j] += stoi(s[i].at(j));
                cout << s[i].at(j) << endl;
                cnt[j]++;
            }
        }
    }
*/
   // for(int i = 0 ; i < maxL; i++)
     //   cout << sum[i] << endl;

   // cout << cnt;
}



