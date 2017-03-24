#include <cmath>
#include <cstdio>
#include <vector>
#include <iostream>
#include <algorithm>
using namespace std;
/*
 if we want
 1011011 -> 11011 -> 1011 -> 11 -> 1
 we can do it using >> as:
 1011011 -> 101101 -> (110110) -> 11011 -> 1101 -> (110) -> 11 -> 1
 once the "1" is found, ignore all the "0"
*/

int main() {
    string player1 = "Louise";
    string player2 = "Richard";
    
    int t;
    cin >> t;
    for (int i = 0; i<t; ++i) {
        unsigned int n;
        cin >> n;
        int times = 0;
        bool first1 = false;
        
        if (n == 1) {
            cout << player1;
        }
        
        while (n > 0) {
            int temp = n & 1;
            if (temp == 1) {
                if (!first1) {
                    first1 = true;
                }
                
                times++;
            }
            else if(!first1) {
                times ++;
            }
            n = n >> 1;
        }
        cout<<"times:"<<times<<endl;
        
        if ((times-1) % 2 == 0) {
            cout << player2;
        }
        else {
            cout << player1;
        }
        cout << endl;
    }
    
    return 0;
}


