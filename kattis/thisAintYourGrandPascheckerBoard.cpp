#include <iostream>
#include <string>

using namespace std;

int main() {
    int N;

    cin >> N;

    char grid[N][N], tempGrid[N][N];

    for(int i = 0 ; i < N ; i++) {
        for(int j = 0; j < N ; j++) {
            cin >> grid[i][j];
        }
    }

    bool isSame = true;
    
    for(int i = 0 ; i < N ; i++) {
        int Wtotal = 0, Btotal = 0;
        for(int j = 0; j < N ; j++) {
            if(grid[i][j] == 'W') Wtotal++;
            else Btotal++;
            if(i > 1) {
                if(grid[i][j] == grid[i - 1][j] && grid[i - 1][j] == grid[i - 2][j])
                    isSame = false;
            }
        }
        if(Wtotal != Btotal)
            isSame = false;
       // cout << endl;
    }

    for(int i=0; i<N; i++)
        for(int j=0; j<N; j++)
            tempGrid[i][j] = grid[N - j -1][i];

     /*for(int i=0; i<N; i++) {
        for(int j=0; j<N; j++)
            cout << tempGrid[i][j];
        cout << endl;
     }*/

     for(int i = 0 ; i < N ; i++) {
        int Wtotal = 0, Btotal = 0;
        for(int j = 0; j < N ; j++) {
            if(tempGrid[i][j] == 'W') Wtotal++;
            else Btotal++;
            if(i > 1) {
                if(tempGrid[i][j] == tempGrid[i - 1][j] && tempGrid[i - 1][j] == tempGrid[i - 2][j])
                    isSame = false;
            }
        }
        if(Wtotal != Btotal)
            isSame = false;
    }


    if(isSame) cout << 1;
    else cout << 0;
}