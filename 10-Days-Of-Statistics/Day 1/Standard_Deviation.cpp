#include<bits/stdc++.h>
using namespace std;

int  main()
{
    int numOfelemts;
    vector<int> arr;
    vector<int> arr1;
    int val;
    float mean;
    float val2;
    float ans;

    cin>>numOfelemts;

    float sum = 0;

    for(int i=0;i<numOfelemts;i++)
    {
        cin>>val;
        sum+=val;
        arr.push_back(val);
    }
    
    mean = (float) sum/numOfelemts;

    sum =0;
    
    for(int i=0;i<numOfelemts;i++)
    {   
        val2 = pow(((float)arr[i]-mean),2);
        sum+=val2;
        arr.push_back(val);
    }

    ans = sqrt(sum/numOfelemts);
    cout<<fixed<<setprecision(1)<<ans<<"\n";

    return 0;
}
