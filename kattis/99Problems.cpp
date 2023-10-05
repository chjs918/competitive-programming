#include <iostream>
using namespace std;

int main() {
    int N, num = 0;

    cin >> N;

    if(N % 100 == 0)
        num = (N / 100 - 1) * 100 + 99;
    else if(N >= 1 && N <= 99)
        num = 99;
    else if(N % 100 >= 11 && N % 100 < 49)
        num = (N / 100 - 1) * 100 + 99;
    else if(N % 100 >= 49 && N % 100 < 100)
        num = N / 100 * 100 + 99;

//더큰99에가까울때
  /*  if(99 - N % 100 >= N % 100 + 1){
        num = N / 100 * 100 + 99;
    } else {
        num = (N / 100 - 1) * 100 + 99;
    }

    if(N == 10000)
        num = N - 1;*/

    cout << num;

    return 0;
}