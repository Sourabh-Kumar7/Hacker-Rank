#include<bits/stdc++.h>
using namespace std;

float CalcMedian(vector<int> arr)
{
    int numOfelemts = arr.size();
    float med;
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
    float medl;
    float medq;
    int val;
    int newsize;
    float range;

    cin>>numOfelemts;

    for(int i=0;i<numOfelemts;i++)
    {
        cin>>val;
        arr.push_back(val);
    }

    for(int i=0;i<numOfelemts;i++)
    {
        cin>>val;
        arr1.push_back(val);
    }
    
    for(int i=0;i<numOfelemts;i++)
    { 
        for(int j=0;j<arr1[i];j++)
        {
            arr2.push_back(arr[i]);
        }
    }
    
    sort(arr2.begin(),arr2.end());

    newsize = arr2.size();
    
    arr.clear();
    arr1.clear();

    if(newsize%2==0)
    {
        copy(arr2.begin(),arr2.begin()+newsize/2,back_inserter(arr));
        copy(arr2.begin()+newsize/2,arr2.end(),back_inserter(arr1));

        medl=CalcMedian(arr);
        medq=CalcMedian(arr1);
    }
    else
    {
        copy(arr2.begin(),arr2.begin()+newsize/2,back_inserter(arr));
        copy(arr2.begin()+(1+newsize/2),arr2.end(),back_inserter(arr1));

        medl=CalcMedian(arr);
        medq=CalcMedian(arr1);
    }
    
    range = medq-medl;
    cout<<fixed<<setprecision(1)<<range<<"\n";


    return 0;
}
