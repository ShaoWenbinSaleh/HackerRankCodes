#include <map>
#include <set>
#include <list>
#include <cmath>
#include <ctime>
#include <deque>
#include <queue>
#include <stack>
#include <string>
#include <bitset>
#include <cstdio>
#include <limits>
#include <vector>
#include <climits>
#include <cstring>
#include <cstdlib>
#include <fstream>
#include <numeric>
#include <sstream>
#include <iostream>
#include <algorithm>
#include <unordered_map>

using namespace std;

int numofCharInStr (string str, char c) {
    int res = 0;
    for (int i =0 ; i< str.size(); ++i) {
        if (str[i] == c) {
            res ++;
        }
    }
    return res;
}

int main(){
    int Q;
    cin >> Q;
    for(int a0 = 0; a0 < Q; a0++){
        int n;
        cin >> n;
        string b;
        cin >> b;
        int numofEmpty = numofCharInStr(b, '_');
        if (numofEmpty == b.size()) {
            cout << "YES";
        }
        else if (numofEmpty >= 1) {
            bool ishappy = true;
            for (int letter = (int)'A'; letter <= (int)'Z'; ++letter) {
                if (numofCharInStr(b, (char)letter)==1) {
                    ishappy = false;
                    break;
                }
            }
            if (ishappy) {
                cout<<"YES";
            }
            else {
                cout<<"NO";
            }
        }
        else{
            bool ishappy = true;
            for (int letter = (int)'A'; letter <= (int)'Z'; ++letter) {
                if (!ishappy) {
                    break;
                }
                for (int i = 0; i < b.size(); ++i) {
                    if (b[i] == letter) {
                        bool ishappythisletter = false;
                        if (i == 0 && i+1 < b.size()) {
                            if (b[i+1] == letter) {
                                ishappythisletter = true;
                            }
                        }
                        else if (i > 0 && i + 1 == b.size()) {
                            if (b[i-1] == letter) {
                                ishappythisletter = true;
                            }
            
                        }
                        else {
                            if (b[i-1]==letter || b[i+1]==letter) {
                                ishappythisletter = true;
                            }
                        }
                        
                        ishappy = ishappythisletter;
                        if (!ishappy) {
                            break;
                        }
                    }
                }
                
            }
            if (ishappy) {
                cout<<"YES";
            }
            else {
                cout<<"NO";
            }
        }
        cout<<endl;
    }
    return 0;
}


