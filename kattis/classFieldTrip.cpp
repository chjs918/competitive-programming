#include <iostream>
#include <string>

using namespace std;

int main() {
    string A, B, merge;
    
    cin >> A;
    cin >> B;

    int i = 0, j = 0;

    while(i < A.size() && j < B.size()) {
        if(A[i] < B[j]) {
            merge.push_back(A[i]);
            i++;
        }
        else if(A[i] > B[j]) {
            merge.push_back(B[j]);
            j++;
        }
        else {
            merge.push_back(A[i]);
            i++;
        }
    }

    if(i != A.size()) {
        while(i < A.size()){
            merge.push_back(A[i]);
            i++;
        }
    }
        
    if(j != B.size()) {
        while(j < B.size()){
            merge.push_back(B[j]);
            j++;
        }
    }
/*
    for(int i = 0 ; i < A.size() ; i++) {
        for(int j = 0 ; j < B.size() ; j++) {
            if(A[i] < B[j])
                merge.push_back(A[i]);
            else if(A[i] > B[j])
                merge.push_back(B[j]);
            else
                merge.push_back(A[i]);
        }       
    }
*/

    cout << merge;

    return 0;
}
