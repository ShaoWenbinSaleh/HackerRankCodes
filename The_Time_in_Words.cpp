#include <cmath>
#include <cstdio>
#include <vector>
#include <iostream>
#include <algorithm>

using namespace std;


int main() 
{
    /* Enter your code here. Read input from STDIN. Print output to STDOUT */  

    string intstrmap[21];
    intstrmap[0] = "zero";
    intstrmap[1] = "one";
    intstrmap[2] = "two";
    intstrmap[3] = "three";
    intstrmap[4] = "four";
    intstrmap[5] = "five";
    intstrmap[6] = "six";
    intstrmap[7] = "seven";
    intstrmap[8] = "eight";
    intstrmap[9] = "nine";
    intstrmap[10] = "ten";
    intstrmap[11] = "eleven";
    intstrmap[12] = "tweleve";
    intstrmap[13] = "thirteen";
    intstrmap[14] = "fourteen";
    intstrmap[15] = "fifteen";//useless
    intstrmap[16] = "sixteen";
    intstrmap[17] = "seventeen";
    intstrmap[18] = "eighteen";
    intstrmap[19] = "ninteen";
    intstrmap[20] = "twenty";

    int hour, minutes;
    cin>>hour;
    cin>>minutes;

    if (minutes == 0)
    {
        cout<<intstrmap[hour]<<" o' clock";
    }
    else if (minutes == 15)
    {
        cout<<"quarter past "<<intstrmap[hour];
    }
    else if (minutes == 45)
    {
        cout<<"quarter to "<<intstrmap[hour+1];
    }
    else if (minutes == 30)
    {
        cout<<"half past "<<intstrmap[hour];
    }
    else if (minutes == 1)
    {
        cout<<"one minute past "<<intstrmap[hour];
    }
    else if (minutes == 59)
    {
        cout<<"one minute to "<<intstrmap[hour+1];
    }
    else if (minutes <= 20)
    {
        cout<<intstrmap[minutes]<<" minutes past "<<intstrmap[hour];
    }
    else if (minutes < 30)
    {
        cout<<"twenty "<<intstrmap[minutes - 20]<<" minutes past "<<intstrmap[hour];
    }
    else if (minutes >= 40)
    {
        cout<<intstrmap[60 - minutes]<<" minutes to "<<intstrmap[hour+1];
    }
    else if (minutes > 30 && minutes < 40)
    {
        cout<<"twenty "<<intstrmap[60 - minutes - 20]<<" minutes to "<<intstrmap[hour+1];
    }

    return 0;
}
