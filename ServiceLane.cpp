#include <cmath>
#include <cstdio>
#include <vector>
#include <iostream>
#include <algorithm>
using namespace std;

int main()
{
    /* Enter your code here. Read input from STDIN. Print output to STDOUT */   
    int N, T;
    cin>>N;
    cin>>T;

    vector <int> testcases;

    for (int i = 0; i < N; ++i)
    {
        int cases;
        cin>>cases;
        testcases.push_back(cases);
    }

    for (int i = 0; i < T; ++i)
    {
        int m,n;
        cin>>m;
        cin>>n;

        cout<< *min_element( testcases.begin() + m, testcases.begin() + n + 1)<<endl;
    }

    return 0;
}
