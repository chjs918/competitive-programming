#include <iostream>
#include <limits.h>

using namespace std;

int main() {
    int n;
    cin >> n;

    int days[n];
    for(int i = 0 ; i < n ; i++)
        cin >> days[i];

    int min = INT_MAX;
    int minIndex = 0;

    for(int i = 0 ; i < n ; i++) {
        if(min > days[i]) {
            min = days[i];
            minIndex = i;
        }
    }
    
    int sum = 0;
    for(int i = 0 ; i < minIndex ; i++) 
        sum++;
    
    cout << sum;

    return 0;
}