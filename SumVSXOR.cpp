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
    unsigned long long n;
    unsigned long long res = 0;
    cin >> n;
    unsigned long long numof0 = 0;
    while(n != 0) {
        if ((n & 1) == 0) {
            numof0 ++;
        }
        n = n >> 1;
    }
    if (numof0 < 32) {
        res = (1 << numof0);
    }
    else {
        unsigned long long temp = pow(2, 32);
        res = (1 << (numof0 - 32));
        res *= temp;
    }
    cout<<res<<endl;
    return 0;
}
