#include <iostream>
#include <string>
#include <sstream>
#include <vector>

using namespace std;

/*
vector<string> split(string input, char delimiter) {
    vector<string> result;
    stringstream ss(input);
    string tmp;
 
    while (getline(ss, tmp, delimiter)) result.push_back(tmp);
 
    return result;
}
*/

//cin >> name >> ÀÏ³Í½Ã¤¿¤¡³ª¤Ã
int main() {
    int num;
    double distance;

    cin >> num;
    cin >> distance;

    int i = 0;
    string maxName, name;
    double eff, vel, fuel, max = 0;

    while(i < num) {
        cin >> name >> vel >> fuel;
        //vector <string> result = split(str, ' ');
        //int vel = stoi(result[1]);
        //int fuel = stoi(result[2]);

        eff = vel / (fuel / (distance / vel));
        if(eff > max) {
            max = eff;
            maxName = name;
        }
        i++;
    }
    
    cout << maxName;


}