#include<bits/stdc++.h>
using namespace std;

int CalcMedian(vector<int> arr)
{
    int numOfelemts = arr.size();
    int med;
    if(numOfelemts%2==0)
    {
        med = (arr[numOfelemts/2] + arr[(numOfelemts/2)-1])/2;
    }
    else
    {
        med = arr[numOfelemts/2];
    }
    return med;
}

int  main()
{
    int numOfelemts;
    vector<int> arr;
    vector<int> arr1;
    vector<int> arr2;
    int medl;
    int medx;
    int medq;
    int val;

    cin>>numOfelemts;

    for(int i=0;i<numOfelemts;i++)
    {
        cin>>val;
        arr.push_back(val);
    }
    
    sort(arr.begin(),arr.end());

    medx=CalcMedian(arr);

    if(numOfelemts%2==0)
    {
        copy(arr.begin(),arr.begin()+numOfelemts/2,back_inserter(arr1));
        copy(arr.begin()+numOfelemts/2,arr.end(),back_inserter(arr2));

        medl=CalcMedian(arr1);
        medq=CalcMedian(arr2);
    }
    else
    {
        copy(arr.begin(),arr.begin()+numOfelemts/2,back_inserter(arr1));
        copy(arr.begin()+(1+numOfelemts/2),arr.end(),back_inserter(arr2));

        medl=CalcMedian(arr1);
        medq=CalcMedian(arr2);
    }

    cout<<medl<<"\n";
    cout<<medx<<"\n";
    cout<<medq<<"\n";


    return 0;
}
