/*
hackerrank
Cut the sticks
2015-08-05
Shao Wenbin
*/
#include <cmath>
#include <cstdio>
#include <vector>
#include <iostream>
#include <algorithm>
using namespace std;


int main() {
    /* Enter your code here. Read input from STDIN. Print output to STDOUT */   
	
	vector<int> input;

	int nofinput = 0;
	cin>>nofinput;

	for (int i = 0; i < nofinput; i++)
	{
		int temp;
		cin>>temp;
		input.push_back(temp);
	}

	sort(input.begin(), input.end());

	while (input.back() > 0 )
	{
		int min = -1;

		int numoferased = 0;

		for (vector<int>::iterator it = input.begin() ; it != input.end(); ++it)
		{
			if( *it > 0)
			{
				if (min == -1)
				{
					min = *it;
				}

				*it -= min;

	
				numoferased++;

			}
		}

		cout<<numoferased<<endl;
	}

    return 0;
}
