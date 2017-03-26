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


int main(){
    int N;
    cin >> N;
    int lastodd = -1;
    int n = 0;
    vector<int> B(N);
    for(int B_i = 0;B_i < N;B_i++){
        cin >> B[B_i];
        if (B[B_i] % 2 == 1) {
            if (lastodd == -1) {
                lastodd = B_i;
            }
            else {
                n += (B_i - lastodd);
                lastodd = -1;
            }
        }
    }
    if (lastodd == -1) {
        cout<<n*2;
    }
    else {
        cout << "NO";
    }
    return 0;
}


