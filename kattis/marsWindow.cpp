#include <iostream>

using namespace std;

int main() {
    int year;

    cin >> year;

    int startYear = 2018;
    bool flag = false;

    int i = 1;
    while(i > 0) {
        if(startYear == year){
            flag = true;
        }
      
        if(i == 5 || (i - 5) % 6 == 0)
            startYear++;

        startYear += 2;
        
        if(startYear > year)
            break;
        i++;
    }

    if(flag)
        cout << "yes";
    else   
        cout << "no";
}