#include <iostream>

using namespace std;

int main() {
    int n, i, j, total = 0;

    cin >> n;
    int m[n + 1][n + 1];
    /*int** m = new int*[n];

    for(int i = 0; i < n; i++)
	    m[i] = new int[n];
*/
    for(i = 1; i <= n ; i++) {
        for(j = 1; j <= n ; j++) {
            m[i][j] = 0; 
            cin >> m[i][j];
        }
    }
     
    for(i = 1; i <= n ; i++) 
        for(j = 1; j <= n ; j++) 
            if(m[i][j] != -1)
                total += 1;

    cout << total << endl;

    for(i = 1; i <= n ; i++) 
        for(j = 1; j <= n ; j++) 
            if(m[i][j] != -1)
                cout << i << " " << j << " " << m[i][j] << endl;    

 /*   for(int i=0; i<n; i++)
	    delete[] m[i];

    delete[] m;*/

}