#include<bits/stdc++.h>
using namespace std;

int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    
    int a[6][6];

    for(int i=0;i<6;i++)
    {
        for(int j=0;j<6;j++)
        {
            cin>>a[i][j];
        }
    }

    int s=0;
    int sum=-10000;
    
    for(int i=0;i<4;i++)
    {
        for(int j=0;j<4;j++)
        {
            s=a[i][j]+a[i][j+1]+a[i][j+2]+a[i+1][j+1]+a[i+2][j]+a[i+2][j+1]+a[i+2][j+2];
            if(s>=sum)
            {
                sum=s;
            }
        }
    }

    cout<<sum;
    
    return 0; 
}
