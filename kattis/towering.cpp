#include <iostream>
#include <algorithm>

using namespace std;

bool desc(int a, int b){ 
  return a > b; 
} 

int main() {
    int h[6], sum1, sum2, total1[3];

    for(int i = 0 ; i < 6; i++)
        cin >> h[i];
    cin >> sum1 >> sum2;

    sort(h, h + 6, desc); 
   
    for(int i = 0; i < 6; i++) { 
        for(int j = i ; j < 6 ; j++) {
            for(int x = j ; x < 6 ; x++) {
                if(h[i] + h[j] + h[x] == sum1){
                  total1[0] = h[i];
                  total1[1] = h[j];
                  total1[2] = h[x];
                }
            }
        }
    }
    
    sort(total1, total1 + 3, desc); 

    for(int i = 0; i < 3; i++)
        cout << total1[i] << " ";
    
    bool ksa[6] = {false, false, false, false, false, false};
    
    for(int i = 0; i < 6; i++) {
        for(int j = 0 ; j < 3; j++) {
            if(h[i] == total1[j])
                ksa[i] = true;
        }
    }
   
   for(int i = 0 ; i < 6; i++){
        if(!ksa[i])
            cout << h[i] << " ";
   }
    
    }
    


