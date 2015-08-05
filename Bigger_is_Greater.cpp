/*
hackerrank
Bigger_is_Greater
2015-08-05
Shao Wenbin
*/
#include <cmath>
#include <cstdio>
#include <vector>
#include <string>
#include <iostream>
#include <algorithm>
using namespace std;

int getIndexofSmallestBiggerChar( char biggerchar, string str, int startindex )
{
	int min = 9999;
	int index;

	for (int i = startindex; i < str.length(); i++)
	{
		if ( str[i] - biggerchar > 0)
		{
			if ( str[i] - biggerchar < min)
			{
				index = i;
				min = str[i] - biggerchar;
			}
		}

	}

	return index;
}


string getSmallestBigger(string str)
{
	for (int i = str.length() - 1; i > 0 ; --i)
	{
		if( str[i] > str[i-1] )
		{
			string outputstr;

			int j = getIndexofSmallestBiggerChar(str[i-1] , str, i);
			swap(str[j], str[i-1]);

			string sortedstr = str.substr(i);
			sort(sortedstr.begin(), sortedstr.end());

			string remainedstr= str.substr(0, i);

			return (remainedstr + sortedstr);
		}
	}

	return "no answer";
}


int main() {
    /* Enter your code here. Read input from STDIN. Print output to STDOUT */   
	int nofinput;
	cin>>nofinput;

	for (int i = 0; i < nofinput; i++)
	{
		string inputstr;
		cin>>inputstr;
		cout<<getSmallestBigger(inputstr)<<endl;
	}

    return 0;
}
