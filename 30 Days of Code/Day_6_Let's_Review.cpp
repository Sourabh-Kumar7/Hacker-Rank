#include <cmath>
#include <cstdio>
#include <vector>
#include <iostream>
#include <algorithm>
using namespace std;


int main() {
    /* Enter your code here. Read input from STDIN. Print output to STDOUT */  
    int t;
    cin>>t;

    string s[t];
    string word;
    string even;
    string odd;
    int k=0;
    while(t--)
    {
        cin>>word;
        s[k]=word;

        string even="";
        string odd="";
        for(int i=0;i<s[k].length();i++)
        {
            if(i%2==0)
            {
                even+=s[k][i];
            }
            else
            {
                odd+=s[k][i];
            }
        }
        cout<<even<<" "<<odd<<"\n";
        k++;
    }

    return 0;
}
