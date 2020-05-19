#include <bits/stdc++.h> 
using namespace std; 

vector<string> s;

void solve(int n)
{
    while(n>0)
    {
        s.push_back(to_string(n%2));
        n=n/2;
    }

    int arr[(s.size()/2)]={0};
    int j=0;

    for(int i=s.size()-1;i>=0;i--)
    {
        if(s[i]=="1")
        {
            arr[j]++;
        }
        else
        {
            j++;
        }
    }

    sort(arr,arr+(s.size()/2));

    cout<<arr[(s.size()/2)-1]<<"\n";

}

int main() 
{
    int n;
    cin>>n;
    solve(n);
    return 0; 
} 
