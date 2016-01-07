#include <cmath>
#include <cstdio>
#include <vector>
#include <iostream>
#include <algorithm>
using namespace std;

bool isCommonSubstr(string s1, string s2)
{

	string s3 = "abcdefghijklmnopqrstuvwxyz";

	for (int i = 0; i < s3.length(); ++i)
	{
		if (s1.find(s3[i])!=string::npos && s2.find(s3[i])!=string::npos)
		{
			return true;
		}
	}
	return false;
}

int main() 
{
    /* Enter your code here. Read input from STDIN. Print output to STDOUT */  
    int T;
    cin>>T;

    for (int i = 0; i < T; ++i)
    {
    	string s1;
    	cin>>s1;
    	string s2;
    	cin>>s2;

    	if (isCommonSubstr(s1, s2))
    	{
    		cout<<"YES"<<endl;
    	}
    	else
    	{
    		cout<<"NO"<<endl;
    	}
    }

    return 0;
}
