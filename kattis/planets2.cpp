#include <cmath>
#include <iostream>
#include <vector>
#include <algorithm>

using namespace std;

int main() {
    int p, v;
    cin >> p;

    char c;
    int num1;
    vector<vector<char>> vec(p);
    vector<char> initial (p);

    for(int i = 0 ; i < p ; i++) {
        cin >> c >> num1;
        initial[i] = c;

        vector<char> alpha(num1);
        for(int j = 0 ; j < num1 ; j++) {
            cin >> alpha[j];
        }
        vec[i] = alpha;
    }


    cin >> v;
    char c2; int num2;
    vector<int> total(p);                                                                                                                                                                                                                                                                                                                                                                           

    for(int x = 0 ; x < v ; x++) {
        cin >> num2 >> c2;
        
       for(int i = 0 ; i < p ; i++) {
            for(int j = 0 ; j < vec[i].size() ; j++) {
                if(c2 == vec[i][j]) 
                    total[i] += num2;
            }
       }
    }

    vector<pair<char, int>> v1;
    
    for(int i = 0 ; i < p ; i++) {
        v1.push_back(make_pair(initial[i], total[i]));
    }
    sort(v1.begin(), v1.end());
    for (int i = 0; i < p; i++)
    {
        cout << v1[i].first << " " << v1[i].second << "\n";
    }
}