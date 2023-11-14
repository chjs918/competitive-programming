#include <cmath>
#include <iostream>
#include <sstream>
#include <vector>
#include <algorithm>
#include <string>

using namespace std;

int main() {
    int num;

    vector<vector<string>> ingr(10);
    vector<string> people;

    while(cin >> num) {
        string menu;
        int index = 0, index2 = 0;
        for(int i = 0 ; i < num ; i++) {
            getline(cin ,menu);

            istringstream ss (menu);
            string subs1;

            int cnt = 0;
            while(getline(ss, subs1, ' ')){
                string name;
                if(!cnt) name = subs1;
                if(cnt) {
                   // people.push_back(name);
                    ingr[index].push_back(subs1);
                    ingr[index].at(index2).push_back(name);
                }
                cnt++;
                index++;
                index2++;
            }
        }
    }


}
/*
  

        string name;
    

        for(int i = 0; i < num ; i++) {
            getline(cin, menu);

            istringstream ss (menu);
            string subs1;

            while(getline(ss, subs1, ' ')){
                ingr.push_back(subs1);
            }
        }
            sort(ingr.begin(), ingr.end());
            for(int i = 0; i < ingr.size() ; i++) 
            //if(find(all.begin(), all.end(), ingr[i]) != all.end())
               // cout << 
               cout << ingr[i];
        
*/