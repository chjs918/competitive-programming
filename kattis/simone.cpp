#include <iostream>

using namespace std;

int main() {
    int N, K, smallCnt = 0, min = 999;

    cin >> N >> K;

    int color[N + 1];
    int cnt[K + 1];
    int smalls[K + 1];

    for(int i = 0 ; i < N; i++){
        color[i] = 0;
    }

    for(int i = 1 ; i <= K; i++){
        cnt[i] = 0;
        smalls[i] = 0;
    }

    for(int i = 0 ; i < N; i++)
        cin >> color[i];

    for(int j = 1; j <= K ; j++) {
        for(int i = 0 ; i < N; i++) {
            if(color[i] == j)
                cnt[j]++;
        }
    }

    for(int i = 1 ; i <= K; i++){
        if(cnt[i] < min)
            min = cnt[i];
    }

    for(int i = 1 ; i <= K; i++){
        if(cnt[i] == min){
            smallCnt++;
            smalls[i] = i;
        }
    }

    cout << smallCnt << endl;

    for(int i = 1 ; i <= K; i++){
        if(smalls[i] != 0)
            cout << i << " ";
    }

}
    