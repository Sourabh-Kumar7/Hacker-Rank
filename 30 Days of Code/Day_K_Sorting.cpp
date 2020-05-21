    #include <bits/stdc++.h>
    #define ll long long int
    #define vi vector<int>
    #define vlld vector<lld>
    #define pb push_back
    #define ff first
    #define ss second
    #define ln '\n'
    #define pii pair<int,int>
    #define mii map<int, int>
    #define vii vector<pii>
    #include<string>
    using namespace std;


    void solve()
    { 
      int n;
      cin>>n;
      vector<int> v;
      for(int i =0;i<n;i++)
      {
        int val;
        cin>>val;
        v.push_back(val);
      }

      int cnt =0;

      for(int i=0;i<n;i++)
      {
        for(int j=0;j<n-i-1;j++)
        {
          if(v[j]>v[j+1])
          {
            swap(v[j],v[j+1]);
            cnt++;
          }
        }
      }
      

      cout<<"Array is sorted in "<<cnt<<" swaps.\n";
      cout<<"First Element: "<<v[0]<<"\n";
      cout<<"Last Element: "<<v[n-1]<<"\n";    
    }  

     
    int main()
    {     
          int tc=1;
          //cin>>tc;

          while(tc--)
          {
            solve();
          }

          return 0;
    
    }

    /** Beyourwild7 **/
