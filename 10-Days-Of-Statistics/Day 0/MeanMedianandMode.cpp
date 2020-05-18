#include<bits/stdc++.h>
using namespace std;

int  main()
{
    int n;
    cin>>n;
    vector<int> v;
    int x;
    float sum=0;
    for(int i=0;i<n;i++)
    {
        cin>>x;
        sum+=x;
        v.push_back(x);
    }
    float mean = (sum/n);
    sort(v.begin(),v.end());
    float med;
    if(n%2==0)
    {
        med = (float)(v[n/2]+v[(n/2)-1])/2;
    }
    else
    {
        med = v[n/2];
    }
    int p = v[n-1];
    int has[p+1];
    for(int i=1;i<=p;i++)
    {
        has[i]=0;
    }
    int mod;
    int max=0;
    for(int i=0;i<n;i++)
    {
        has[(v[i])]++;
        if(max<has[(v[i])])
        {
            max = has[(v[i])];
            mod= v[i];
        }
    }

    cout<<fixed<<setprecision(1)<<mean<<endl;
    cout<<fixed<<setprecision(1)<<med<<endl;
    cout<<mod<<endl;
    

    
    return 0;
}
