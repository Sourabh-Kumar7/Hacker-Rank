#include<bits/stdc++.h>
using namespace std;

int  main()
{
    int n;
    cin>>n;

    map<string,int> msi;        
    map<string,int> :: iterator it;

    for(int i=0;i<n;i++)
    {
        string s;
        int p;
        cin>>s;
        cin>>p;
        msi.insert(make_pair(s,p));
    }
    string s1;
    while(cin>>s1)
    {
        it = msi.find(s1);
        if(it==msi.end())
        {
            cout<<"Not found\n";
        }
        else
        {
            cout<< it->first << "=" << it->second <<"\n";
        }
    }
    return 0;
}
