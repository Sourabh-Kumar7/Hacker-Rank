#include<bits/stdc++.h>
using namespace std;


int  main()
{
    int numOfelemts;
    cin>>numOfelemts;

    vector<int> weight;
    vector<int> freq;
    int val;
    int wifi=0;
    int fi=0;
    float ans;

    for(int i=0;i<numOfelemts;i++)
    {
        cin>>val;
        weight.push_back(val);
    }
    for(int i=0;i<numOfelemts;i++)
    {
        cin>>val;
        freq.push_back(val);
    }
    for(int i=0;i<numOfelemts;i++)
    {
        fi+=freq[i];
        wifi+=(weight[i]*freq[i]);
    }

    ans = (float)wifi/fi;

    cout<<fixed<<setprecision(1)<<ans<<"\n";    
    return 0;
}
