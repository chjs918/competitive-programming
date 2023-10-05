#include <iostream>

using namespace std;

int main() {
    int h, w, n;

    cin >> h >> w >> n;

    int bricks[n];

    for(int i = 0; i < n ; i++){
        cin >> bricks[i];
    }

    int sum = w;
    bool flag = false;

    int j = 0;
    for(int i = 0 ; i < h ; i++) {
        while(sum > 0) {
            sum = sum - bricks[j];
            if(sum == 0) { 
                flag = true;
            }
            j++;
        }
        sum = w;
        if(!flag)
            break;
        if(i != h - 1)
            flag = false;
    }

    if(flag)
        cout << "YES";
    else
        cout << "NO";
}